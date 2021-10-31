// https://leetcode.com/problems/middle-of-the-linked-list/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    int size(ListNode* head){
        int n=0;
        while(head != NULL){
            n++;
            head = head->next;
        }
        return n;
    }
    
    ListNode* middleNode(ListNode* head) {
        int n  = size(head);
        
        n = (n/2) + 1;
        
        int i=0;
        while(head != NULL){
            i++;
            if(i==n)
                return head;
            head = head->next;
        }
        
        return head;
    }
};
