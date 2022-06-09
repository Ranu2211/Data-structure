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
        ListNode *cur  = head;
        
        int len=0;
        while(cur!=NULL)
        {
            cur = cur->next;
            len++;
        }
       
        
        if(n>len)
            return head;
        
        if(n==len)
            return head->next;
        
        
        len = len-n;
        cur = head;
        ListNode *prev = NULL;
        int c=0;
        while(c!=len)
        {
            c++;
            prev = cur;
            cur=cur->next;
        }
        
        prev->next = cur->next;
       // cout<<cur->val<<" ";
        
        return head;
     
    }
};