class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int fi=-1,la=n;
        int lo=0,hi=n-1;
        while(lo<=hi)
        {
            int mid=lo+(hi-lo)/2;
            if(nums[mid]>=target)
            {
                fi=mid;
                hi=mid-1;
            }
            else 
            lo=mid+1;
        }
        if(fi==-1 || nums[fi]!=target) return{-1,-1};
        lo=0,hi=n-1;
        while(lo<=hi)
        {
             int mid=lo+(hi-lo)/2;
             if(nums[mid]>target)
             {
                 la=mid;
                 hi=mid-1;
             }
             else
             lo=mid+1;
        }
        return {fi,la-1};
    }
};