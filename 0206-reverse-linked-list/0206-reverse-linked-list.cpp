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
    ListNode* reverseList(ListNode* head) {
        ListNode* node = head;
       ListNode* p = NULL;
           ListNode* q = NULL;
           
        while(node!=NULL){
            
            q= p;
            p = node;
            node = node->next;
           p->next = q;
        }
         head =p ;
        return head;
        
    }
};