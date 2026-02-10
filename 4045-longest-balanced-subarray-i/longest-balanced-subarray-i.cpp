class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n=nums.size();
        int len=0;
        for(int i=0;i<n;i++)
        {
            unordered_set<int>ev;
            unordered_set<int>odd;
            for(int j=i;j<n;j++)
            {
                if(nums[j]%2==0)
                ev.insert(nums[j]);
                else
                odd.insert(nums[j]);
                if(ev.size()==odd.size())
                len=max(len,j-i+1);
            }
        }
        return len;
    }
};