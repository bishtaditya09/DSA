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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* p1=head;
        if(head==nullptr || head->next==nullptr)
        return head;
        ListNode* ev=head->next;
        ListNode* ev_head=ev;
        while(ev && ev->next)
        {
            p1->next=ev->next;
            p1=p1->next;
            ev->next=p1->next;
            ev=ev->next;
        }
          p1->next=ev_head;
          return head;
    }
};