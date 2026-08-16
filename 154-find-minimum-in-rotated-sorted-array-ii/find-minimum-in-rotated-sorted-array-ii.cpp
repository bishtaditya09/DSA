class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int hi=n-1,lo=0;
        int mini=INT_MAX;
        while(lo<=hi)
        {
             if(nums[lo]==nums[hi])
             {
                   mini=min(nums[lo],mini);
                   lo++;
                   hi--;
                   continue;
             }
             int mid=lo+(hi-lo)/2;
             if(nums[lo]<=nums[hi])
             {
                    mini=min(nums[lo],mini);
                    break;
             }
             else if(nums[lo]<=nums[mid])
             {
                 mini=min(mini,nums[lo]);
                 lo=mid+1;
             }
             else
             {
                mini=min(mini,nums[mid]);
                hi=mid-1;
             }
        }
        return mini;
    }
};