/* https://leetcode.com/problems/lfu-cache/ */

class LFUCache {
public:
    int capacity, minFreq;
    unordered_map<int, pair<int, int>>keyVal;
    unordered_map<int, list<int>> freqList;
    unordered_map<int, list<int>::iterator > pos;

    void updateFreq(int key){
        // update the Frequency  
        // -- delete key from curr_freq 
        // -- increment freq 
        // -- insert key in new freq
        // -- update new pos of key
        // -- check for minFreq 
        int curr_freq = keyVal[key].second; 
        freqList[curr_freq].erase(pos[key]);

        keyVal[key].second++;
        curr_freq = keyVal[key].second;

        freqList[curr_freq].push_back(key);

        pos[key] = --freqList[curr_freq].end();

        if(freqList[minFreq].empty()){
            minFreq++;
        }
    }

    LFUCache(int capacity) {
        this->capacity = capacity;
        minFreq = 0;
    }
    int get(int key) {
        if(keyVal.find(key) == keyVal.end()){
            return -1;
        }
        updateFreq(key);
        return keyVal[key].first;
    }
    
    void put(int key, int value) {
        if(capacity == 0) return;
        if(keyVal.find(key) != keyVal.end()){
            // update Case
            keyVal[key].first = value;
            updateFreq(key);
            return;
        }
        if(keyVal.size() == capacity){
            // Find the LRU;
            int delKey = freqList[minFreq].front();
            keyVal.erase(delKey);
            pos.erase(delKey);
            freqList[minFreq].pop_front();
        }
        keyVal[key] = {value, 1};
        freqList[1].push_back(key);
        pos[key] = --freqList[1].end();
        minFreq = 1;
    }
};

/**
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache* obj = new LFUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
