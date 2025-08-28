class Solution {
public:
    int longestSubarray(vector<int>& nums) {
      int n=nums.size();
      int maxi=INT_MIN;
      int len=0;
      int ri=0,le=0;
      int cntz=0;
      while(ri<n)
      {
        if(nums[ri]==0) cntz++;
        while(cntz>1)
        {
            if(nums[le]==0)
            { 
                cntz--;
            }
                le++;
        }
        maxi=max(maxi,ri-le);
        ri++;
      }
        return maxi;
    }
};