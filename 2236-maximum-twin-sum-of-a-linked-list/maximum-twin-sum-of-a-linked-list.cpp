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
    int pairSum(ListNode* head) {
        int sum=0,maxi=INT_MIN;
        ListNode* p1=head;
        stack<int>st;
        if(head==NULL) return 0;
        if(p1->next==NULL) return p1->val;
        ListNode* mid=midd(head);
        while(mid)
        {
            st.push(mid->val);
            mid=mid->next;
        }
        while(!st.empty())
        {
            sum=(p1->val)+st.top();
            p1=p1->next;
            st.pop();
            maxi=max(sum,maxi);
        }
        return maxi;
    }
};