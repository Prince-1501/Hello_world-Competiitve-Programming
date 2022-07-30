// https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/0

/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/


class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
        unordered_set<int>seen;
        Node* curr = head;
        
        if(curr == NULL)
            return head;
        else
            seen.insert(curr->data);
            
        while(curr != NULL && curr->next != NULL){
            if(seen.find(curr->next->data) != seen.end()){
                // same 
                curr->next = curr->next->next;
            }else{
                // not same
                seen.insert(curr->next->data);
                curr = curr->next;
            }
        }
        return head;
    }
};
