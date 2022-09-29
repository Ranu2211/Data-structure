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
        
        ListNode *d2 = headB;
        while(headB!=NULL){
            ListNode *d1 = headA;
           while(d1!=NULL){
               if(d1==headB)
                return headB;
                d1 = d1->next;
            }
          headB = headB->next;
        }
       return NULL;
    }
};