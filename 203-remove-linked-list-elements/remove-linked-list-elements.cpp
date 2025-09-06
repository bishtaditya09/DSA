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
    ListNode* removeElements(ListNode* head, int val) {
            ListNode* p1=head;
            ListNode* temp=NULL;
            if(head==NULL) return head;
            ListNode* pr=new ListNode(-1);
            while(p1)
            {
               if(p1->val==val)
               {
                if(p1==head)
                head=head->next;
                temp=p1;
                p1=p1->next;
                pr->next=p1;
                delete temp;
               }
               else
               {
                pr=p1;
                p1=p1->next;
               }
            }
            return head;
    }
};