// https://leetcode.com/problems/remove-duplicates-from-sorted-list/

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr = head;
        while(curr != NULL && curr->next != NULL){
            if(curr->val == curr->next->val){
                // same 
                ListNode* temp = curr->next;
                curr->next = temp->next;
                delete(temp);
            }else{
                curr = curr->next;
            }
        }
        return head;
    }
};
