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
    //in this func t1->smaller ll t2->larger ll d=diff
    ListNode* collPoint(ListNode* t1,ListNode* t2,int d)
    {
          while(d)
          {
            d--;
            t2=t2->next;
          }
          while(t2)
          {
            if(t1==t2)
            return t1;
            t1=t1->next;
            t2=t2->next;
          }
          return nullptr;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        int cnt1=1,cnt2=1;
        while(temp1)
        {
            temp1=temp1->next;
            cnt1++;
        }
        while(temp2)
        {
            temp2=temp2->next;
            cnt2++;
        }
        if(cnt1>cnt2)
        {
            return collPoint(headB,headA,cnt1-cnt2);
        }
        else
           return collPoint(headA,headB,cnt2-cnt1);

    }
};