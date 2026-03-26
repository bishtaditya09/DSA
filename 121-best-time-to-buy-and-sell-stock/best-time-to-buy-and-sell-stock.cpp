class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int maxi=0;
        int mini=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            int cost=nums[i]-mini;
            mini=min(mini,nums[i]);
            maxi=max(maxi,cost);
        }
      return maxi;
    }
};