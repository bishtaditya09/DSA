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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* h1=list1;
        ListNode* h2=list2;
        ListNode* dummy=new ListNode(-1);
        ListNode* p3=dummy;
        while(h1 && h2)
        {
            if(h1->val<h2->val)
            {
                p3->next=h1;
                h1=h1->next;
            }
            else{
                p3->next=h2;
                h2=h2->next;
            }
            p3=p3->next;
        }
        while(h1)
        {
            p3->next=h1;
            h1=h1->next;
            p3=p3->next;
        }
        while(h2)
        {
            p3->next=h2;
            h2=h2->next;
            p3=p3->next;
        }
        return dummy->next;
    }
};