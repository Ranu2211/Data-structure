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
    bool isPalindrome(ListNode* head) {
        ListNode* p = head;
        stack<int>reverse;
        while(p){
            reverse.push(p->val);
            p=p->next;
        }
        while(head){
        auto it = reverse.top();
            if(head->val!=it)return false;
            head = head->next;
            reverse.pop();
        }
        return true;
        
    }
    
};