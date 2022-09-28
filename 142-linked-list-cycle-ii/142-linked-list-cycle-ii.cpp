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
        if(head==NULL)
            return head;
        ListNode *slow = head;
        ListNode *fast = head;
        
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
             if(slow==fast)
               break; 
        }
        if(slow!=fast)
            return NULL;
         fast = head;
        while(fast && fast->next){
            if(slow==fast)
                return fast;
            slow = slow->next;
            fast = fast->next;
        }
            
       
        return NULL;
    }
};