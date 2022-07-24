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
     ListNode* reverse( ListNode* head){
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

 ListNode* add( ListNode* l1,  ListNode* l2){
 
       ListNode* temp = new  ListNode();
         ListNode* pre = temp;
        int c = 0;
        
        while(l1!= NULL || l2!=NULL || c){
            int sum = 0;
            if(l1!=NULL){
               sum += l1->val;
                l1 = l1->next;
            }
             if(l2!=NULL){
               sum += l2->val;
                l2 = l2->next;
            }
            sum += c;
            c = sum/10;  
        
       ListNode* node = new  ListNode();
        node->val = sum%10;
        pre->next = node;
        pre = pre->next;
       
        }
         return temp->next;
    
}

 ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
l1 = reverse(l1);
l2 = reverse(l2);
ListNode* ans = add(l1,l2);
  ans = reverse(ans);

return ans;
}
    
    
  
};