class Solution {
public:
    int sum(int n)
    {
        int s=0;
        while(n)
        {
            s+=n%10;
            n=n/10;
        }
        return s;
    }
    int minElement(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            mini=min(mini,sum(nums[i]));
        }
        return mini;
    }
};