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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* p1;
        if(head==NULL || head->next==NULL)
        return NULL;
        while(fast && fast->next)
        {
            fast=fast->next->next;
            p1=slow;
            slow=slow->next;
        }
        p1->next=slow->next;
        
        return head;
    }
};