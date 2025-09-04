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
    ListNode* rev(ListNode* head)
    {
         if(head==nullptr)
        return head;
        ListNode* prev=nullptr;
        ListNode* curr=head;
        ListNode* next=nullptr;
        while(curr!=nullptr)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
        return head;
    }
    ListNode* sortList(ListNode* head) {
        priority_queue<int>pq;
        ListNode* p1=head;
        while(p1)
        {
            pq.push(p1->val);
            p1=p1->next;
        }
        p1=head;
        while(p1)
        {
            p1->val=pq.top();
            pq.pop();
            p1=p1->next;
        }
        p1=rev(head);
        return p1;
    }
};