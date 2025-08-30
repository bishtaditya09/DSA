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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode* dummy=new ListNode(-1);
       ListNode* curr;
       ListNode* newNode;
       int sum=0;
       int carry=0;
       curr=dummy;
       while(l1!=nullptr || l2!=nullptr)
       { 
            sum=carry;
            if(l1) sum+=l1->val;
            if(l2) sum+=l2->val;
            newNode=new ListNode(sum%10);
            carry=sum/10;
            curr->next=newNode;
            curr=curr->next;
            if(l1) l1=l1->next;
            if(l2) l2=l2->next; 
       }
       if(carry)
       {
          newNode=new ListNode(carry);
          curr->next=newNode;
       }
       return dummy->next;
    }
};