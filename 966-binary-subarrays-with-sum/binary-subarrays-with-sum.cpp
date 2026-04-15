class Solution {
public:
    int sum(vector<int>& nums, int goal) {
        int n=nums.size();
        int le=0,ri=0;
        int sum=0,cnt=0;
        if(goal<0) return 0;
        while(ri<n)
        {
            sum+=nums[ri];
            while(sum>goal)
            {
                sum-=nums[le];
                le++;
            }
            cnt+=(ri-le)+1;
            ri++;
        }
        return cnt;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return sum(nums,goal)-sum(nums,goal-1) ;
    }
};