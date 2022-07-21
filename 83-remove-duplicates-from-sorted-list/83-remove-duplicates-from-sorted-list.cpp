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
    ListNode* deleteDuplicates(ListNode* head) {
      
        ListNode* p = head;
        while(p && p->next){
            ListNode* post =p->next;
            if(p->val==post->val){
                p->next = post->next;
               
            }
            else {
               p = post; 
            }
            
           
            
        }
        return head;
    }
};