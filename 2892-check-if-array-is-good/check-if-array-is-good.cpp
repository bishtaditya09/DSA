class Solution {
public:
    bool isGood(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      int n=nums.size();
      for(int i=0;i<n;i++)
      {
        if(nums[i]!=min(i+1,n-1))
        return false;
      }
      return true;
    }
};