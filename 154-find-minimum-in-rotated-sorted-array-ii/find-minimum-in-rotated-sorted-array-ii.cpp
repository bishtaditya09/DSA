class Solution {
public:
    int findMin(vector<int>& nums) {
        int lo=0;
        int mini=INT_MAX;
        int hi=nums.size()-1;
        while(lo<=hi)
        {
             if(nums[lo]==nums[hi])
             {
                  mini=min(nums[lo],mini);
                  hi--;
                  lo++;
                  continue;
             }
             int mid=lo+(hi-lo)/2;
             if(nums[mid]>=nums[lo])
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