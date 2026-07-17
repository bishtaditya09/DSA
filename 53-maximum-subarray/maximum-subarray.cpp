class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int maxi=INT_MIN,n=nums.size();
       int sum=0;
       for(int i=0;i<n;i++)
       {
          if(sum<0) sum=0;
          sum+=nums[i];
          maxi=max(maxi,sum);
       }
       return maxi;
    }
};