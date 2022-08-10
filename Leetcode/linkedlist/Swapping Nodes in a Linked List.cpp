// https://leetcode.com/problems/swapping-nodes-in-a-linked-list/

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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* slow = head,  *fast = head;
        while(--k){
            fast = fast->next;
        }
        ListNode *first = fast;
        
        while(fast->next != NULL){
            slow = slow->next;
            fast = fast->next;
        }
        
        swap(first->val, slow->val);
        return head;
    }
};
