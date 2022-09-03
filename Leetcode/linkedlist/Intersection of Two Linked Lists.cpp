// https://leetcode.com/problems/intersection-of-two-linked-lists/

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* curr = headA;
        int a =0, b=0;
        while(curr){
            a++;
            curr = curr->next;
        }
        curr =headB;
        while(curr){
            b++;
            curr = curr->next;
        }
        int diff = abs(a-b);
        if(a<b){
            while(diff--){
                headB = headB->next;
            }
        }else{
            while(diff--){
                headA = headA->next;
            }
        }
        
        while(headA and headB){
            if(headA == headB){
                return headA;
            }
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }
};
