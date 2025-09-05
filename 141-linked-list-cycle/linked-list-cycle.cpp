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
    bool hasCycle(ListNode *head) {
      if(head==nullptr || head->next==NULL) return false;
     
      unordered_map<ListNode*,int>mp;
      ListNode* p1=head;
      while(p1!=nullptr)
      {
        mp[p1]=1;
        p1=p1->next;
        if(mp.find(p1)!=mp.end())
        return true;
      }
      return false;
    }
};