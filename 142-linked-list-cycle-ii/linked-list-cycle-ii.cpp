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
   ListNode* start(ListNode* fast,ListNode* slow)
   {
         while(slow!=fast)
         {
            if(slow==fast)
            return fast;
            slow=slow->next;
            fast=fast->next;
         }
         return fast;
   }
    ListNode *detectCycle(ListNode *head) {
       if(head==NULL || head->next==NULL)
       return NULL;
       ListNode* fast=head;
       ListNode* slow=head;
       while(fast && fast->next)
       {
          fast=fast->next->next;
          slow=slow->next;
          if(slow==fast)
          {
            slow=head;
            return start(fast,slow);
          }
       }
       return NULL; 
    }
};