// https://leetcode.com/problems/sort-list/

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
    
    ListNode* Mid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast->next != NULL and fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    
    ListNode* mergeSortedList(ListNode *p1, ListNode *p2){
        if(p1 == NULL or p2 == NULL){
            return (p1==NULL) ? p2 : p1;
        }
        
        ListNode * ans = new ListNode(0);
        ListNode* curr = ans;
        
        while(p1 != NULL and p2 != NULL){
            if(p1->val < p2->val){
                curr->next = p1;
                p1= p1->next;
            }else{
                curr->next = p2;
                p2 = p2->next;
            }
            curr = curr->next;
        }
        
        if(p1 != NULL or p2 != NULL){
            curr->next = (p1 != NULL) ?  p1 : p2;
        }
        return ans->next;
    }
    
    ListNode* sortList(ListNode* head) {
        if( head == NULL or head->next == NULL) return head;
        ListNode* mid = Mid(head);
        ListNode* newhead = mid->next;
        mid->next = NULL;
        
        ListNode* left_half = sortList(head);
        ListNode* right_half = sortList(newhead);
        
        return mergeSortedList(left_half, right_half);
    }
};
