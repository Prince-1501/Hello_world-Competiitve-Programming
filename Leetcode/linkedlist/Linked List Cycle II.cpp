// https://leetcode.com/problems/linked-list-cycle-ii/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL) return NULL;
        ListNode* slow = head, *fast = head, *entry = head;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast){
                while(entry != slow){
                    slow = slow->next;
                    entry = entry->next;
                }
                return slow;
            }
        }
        return NULL;
        
        /*
        
        unordered_set<ListNode*> set;
        ListNode* curr = head;
        while(curr != NULL){
            if(set.find(curr) != set.end()){
                return curr;
            }else{
                set.insert(curr);
                curr = curr->next;
            }
        }
        return NULL;
        
        */
    }
};
