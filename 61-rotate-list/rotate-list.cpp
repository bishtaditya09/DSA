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
    ListNode* last(ListNode* tp,int k)
    {
        int cnt=1;
        while(tp)
        {
            if(cnt==k) return tp;
            cnt++;
            tp=tp->next;
            
        }
        return tp;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* p1=head;
        if(head==nullptr || k==0)
        return head;
        int cnt=1;
        while(p1->next)
        {
            p1=p1->next;
            cnt++;
        } 
        if(k%cnt==0) return head;
        k=k%cnt;
        p1->next=head;
        
        ListNode* Newlast=last(head,cnt-k);
        head=Newlast->next;
        Newlast->next=nullptr;
        return head;

    }
};