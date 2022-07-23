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
   ListNode* reverse(ListNode* head){
ListNode *p = head;
ListNode* q = NULL;
ListNode* r = NULL;
while(p!=NULL){
   r = q;
   q = p;
   p = p->next;
    q->next = r;
}
head = q;
return head;
}
ListNode* move(ListNode* head){
    ListNode* slow = head;
ListNode* fast = head;
while( fast!=NULL && fast->next!=NULL ){
    slow = slow->next;
    fast = fast->next->next;
}
return slow;
}
ListNode* reorderList(ListNode* head){
ListNode* dummy = new ListNode();
dummy->next = head;



ListNode* slow = move(head);
 ListNode* second = reverse(slow->next);
 slow->next = NULL;
 ListNode* temp1 = new ListNode();

while(second){
    ListNode* x = second->next;
     second->next = head->next;
     head->next = second;
     head = head->next->next;
     second = x;
}


return dummy->next;
}
};