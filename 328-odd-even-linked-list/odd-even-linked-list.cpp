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
        int c=1;
        queue<int>que;
        ListNode* p1=head;
        vector<int>ev,od;
        int pos=1;
        while(p1)
        {
            if(pos%2==0) ev.push_back(p1->val);
            else od.push_back(p1->val);
            p1=p1->next;
            pos++;
        }
         p1=head;
          for(auto it:od)
          {
            p1->val=it;
            p1=p1->next;
          }
          for(auto it:ev)
          {
            p1->val=it;
            p1=p1->next;
          }

          return head;
    }
};