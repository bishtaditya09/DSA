class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int lo=0,hi=n-1;
        int mini=INT_MAX;
        while(lo<=hi)
        {
              int mid=lo+(hi-lo)/2;
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