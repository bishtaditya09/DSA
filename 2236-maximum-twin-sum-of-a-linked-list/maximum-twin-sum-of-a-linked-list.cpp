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
    ListNode* midd(ListNode* head)
    {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast && fast->next)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
    ListNode* rev(ListNode* head)
    {
        ListNode* prev=NULL;
        ListNode* curr=head;
        while(curr)
        {
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
       return prev;
    }
    int pairSum(ListNode* head) {
        int sum=0,maxi=INT_MIN;
        ListNode* p1=head;
        stack<int>st;
        if(head==NULL) return 0;
        if(p1->next==NULL) return p1->val;
        ListNode* mid=midd(head);
        ListNode* p2=rev(mid);
        while(p2)
        {
            sum=p1->val+p2->val;
            maxi=max(maxi,sum);
            p1=p1->next;
            p2=p2->next;
        }
        return maxi;
    }
};