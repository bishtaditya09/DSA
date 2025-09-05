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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)
        return NULL;
        unordered_map<ListNode*,int>mp;
        ListNode* p1=head;
        while(p1)
        {
            mp[p1]=1;
            p1=p1->next;
            if(mp.find(p1)!=mp.end())
            return p1;
        }
       return NULL; 
    }
};