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
    ListNode* rev(ListNode* head) {
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
    bool isPalindrome(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast && fast->next)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* midhead=slow;
        ListNode* p1=head;
        midhead=rev(midhead);
        while(midhead)
        {
                 if(p1->val!=midhead->val)
                 return false;
                 p1=p1->next;
                 midhead=midhead->next;
        }
        return true;
    }
};