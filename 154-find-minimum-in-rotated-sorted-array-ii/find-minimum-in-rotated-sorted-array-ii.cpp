class Solution {
public:
    int findMin(vector<int>& nums) {
        int mini=INT_MAX;
        int n=nums.size();
        int hi=n-1,lo=0;
        while(lo<=hi)
        {
            if(nums[lo]==nums[hi])
             {
             mini=min(mini,nums[lo]);
             lo++;
             hi--;
             continue;
           }
            int mid=(lo+hi)/2;
            if(nums[lo]<=nums[hi])
            {
                mini=min(mini,nums[lo]);
                break;
            }
            if(nums[lo]<=nums[mid])
            {
                mini=min(mini,nums[lo]);
                lo=mid+1;
            }
            else
            {
                mini=min(nums[mid],mini);
                hi=mid-1;
            }
        }
        return mini;
    }
};