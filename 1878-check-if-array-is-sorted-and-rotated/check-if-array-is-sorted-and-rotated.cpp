class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int i=0,j,ns=0;
        while(i<n)
        {
            j=(i+1)%n;
            if(nums[i]>nums[j])
            {
               ns++;
            if(ns>1) return false;
            }
            i++;
        }
        return true;
    }
};