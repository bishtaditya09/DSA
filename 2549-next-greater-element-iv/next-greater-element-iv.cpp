class Solution {
public:
    vector<int> secondGreaterElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>ng(n,-1);
        stack<int>st1,st2;
        for(int i=0;i<n;i++)
        {
            while(!st2.empty() && nums[i]>nums[st2.top()])
            {
                ng[st2.top()]=nums[i];
                st2.pop();
            }
            stack<int>temp;

            while(!st1.empty() && nums[i]>nums[st1.top()])
            {
                temp.push(st1.top());
                st1.pop();
            }

            while(!temp.empty())
            {
                st2.push(temp.top());
                temp.pop();
            }
            st1.push(i);
        }
        return ng;
    }
};