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
    int getDecimalValue(ListNode* head) {
     
    ListNode* temp = head;
   ListNode* pre = head;
 int count = 0;
 int sum=0;
  while(temp!=NULL){
    temp = temp->next;
    count++;     
}
while(pre!=NULL){
sum += pow(2,count-1) * pre->val;
 pre =  pre->next;
 count--;
}
return sum;
}
};