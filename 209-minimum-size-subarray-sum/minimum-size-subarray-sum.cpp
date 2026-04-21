class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
         int mini=INT_MAX;
        int le=0,ri=0;
        int sum=0;
        int n=nums.size();
        while(ri<n)
        {
            sum+=nums[ri];
            while(sum>=target)
            {
                mini=min(mini,ri-le+1);
                sum-=nums[le];
                le++;
            }
            ri++;
        }
        return (mini==INT_MAX)?0:mini;
    }
};