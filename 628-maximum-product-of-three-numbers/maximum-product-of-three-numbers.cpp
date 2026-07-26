class Solution {
public:
    int maximumProduct(vector<int>& nums) {
      if(nums.size()<3) 
      return nums[0]*nums[1]*nums[2];

      sort(nums.begin(),nums.end());
      int n=nums.size();
      int p1=nums[n-3]*nums[n-1]*nums[n-2];   
      int p2=nums[0]*nums[1]*nums[n-1];
      return max(p1,p2);
    }
};