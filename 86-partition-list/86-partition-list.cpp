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
  void insertAtTail(ListNode* &tail, ListNode* curr){
       tail->next = curr;
       tail = curr;
   }
    ListNode* partition(ListNode* head, int x) {
        ListNode* lefthead = new ListNode(-1);
        ListNode* lefttail = lefthead;
        ListNode* righthead = new ListNode(-1);
        ListNode* righttail = righthead;
        
        ListNode* curr = head;
        while(curr!=NULL){
            int val = curr->val;
            if(val<x){
                insertAtTail(lefttail,curr);
            }
             else if(val>=x){
                 insertAtTail(righttail,curr);
             }
            curr = curr->next;
        }
        if(righthead!=NULL){
            lefttail->next = righthead->next;
            righttail->next = NULL;
        }
        head = lefthead->next;
        delete(lefthead);
        delete(righthead);
        return head;
    }
};