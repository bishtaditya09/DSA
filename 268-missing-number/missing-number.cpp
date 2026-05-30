class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xr1=0,xr2=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            xr1^=(i+1);
            xr2^=nums[i];
        }
       return xr1^xr2;
    }
};