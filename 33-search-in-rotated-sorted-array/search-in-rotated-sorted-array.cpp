class Solution {
public:
    int search(vector<int>& nums, int x) {
        int n=nums.size();
        int lo=0,hi=n-1;
        while(lo<=hi)
        {
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==x)
            return mid;
            else if(nums[lo]<=nums[mid])
            {
                 if(nums[lo]<=x && nums[mid]>=x)
                 hi=mid-1;
                 else
                 lo=mid+1;
            }
            else
            {
                if(nums[mid]<=x && x<=nums[hi])
                lo=mid+1;
                else
                hi=mid-1;
            }
        }
        return -1;
    }
};