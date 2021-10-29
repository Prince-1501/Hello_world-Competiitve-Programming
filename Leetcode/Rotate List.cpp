// https://leetcode.com/problems/rotate-list/


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
        int n = 0;
        while(head != NULL){
            n++;
            head = head->next;
        }
        return n;
    }
    
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL)
            return head;
        
        int n = size(head);
        int loop = k % n;
        loop = n - loop;
        
        if( n == 1 || loop == n)
            return head;
        
        int j=0;
        ListNode* temp = head;
        ListNode* firstAddress = head;
        
        while(temp != NULL){
            j++;
            if(j == loop){
                firstAddress = temp->next;
                temp->next = NULL;
                break;
            }
            temp = temp->next;
        }
        
        temp = firstAddress;
        while(temp->next != NULL){
            temp = temp->next;
        }
        
        temp->next = head;
        return firstAddress;
        
        
    }
};

