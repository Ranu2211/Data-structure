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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL){
            return head;
        }
         ListNode* curr = head;
        int count = 0;
         ListNode* prev = new ListNode();
        prev->next = head;
        while(curr!=NULL){
            curr = curr->next;
            count++;
        }
        if(n>count){
            return head;
        }
        if(n==count)
            return head->next;
        
        count = count-n;
         curr =  head;
        while(count--){
           prev = curr;
             curr = curr->next;
        }
        prev->next = curr->next;
        return head;
            }
};