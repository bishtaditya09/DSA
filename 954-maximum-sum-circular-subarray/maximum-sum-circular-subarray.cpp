class Solution {
int kadanemin(vector<int>&nums)
{
     int sum=0,mini=INT_MAX;
     int n=nums.size();
     for(int i=0;i<n;i++)
     {
         if(sum>0) sum=0;
         sum+=nums[i];
         mini=min(sum,mini);
     }
     return mini;
}
int kadanemx(vector<int>&nums)
{
     int sum=0,maxi=INT_MIN;
     int n=nums.size();
     for(int i=0;i<n;i++)
     {
         if(sum<0) sum=0;
         sum+=nums[i];
         maxi=max(sum,maxi);
     }
     return maxi;
}
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int sum=accumulate(nums.begin(),nums.end(),0);
        int minSum=kadanemin(nums);
        int maxSum=kadanemx(nums);
        int csum=sum-minSum;
        return maxSum<0?maxSum:max(maxSum,csum);
    }
};