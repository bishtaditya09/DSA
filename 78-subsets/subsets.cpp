class Solution {
public:
   void print(int i,vector<int>&nums,vector<vector<int>>&ans,vector<int>&ds,int n)
   {
    if(i>=n)
    {
        ans.push_back(ds);
        return;
    }
    ds.push_back(nums[i]);
    print(i+1,nums,ans,ds,n);
    ds.pop_back();
    print(i+1,nums,ans,ds,n);
   }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        vector<int>ds;
        print(0,nums,ans,ds,n);
        return ans;
    }
};