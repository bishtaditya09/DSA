class Solution {
public:
    void solve(int ind,vector<int>&nums,vector<vector<int>>&ans,vector<int>&ds,int n)
    {
        ans.push_back(ds);
        for(int i=ind;i<nums.size();i++)
        {
            if(i>ind && nums[i]==nums[i-1]) continue;
            ds.push_back(nums[i]);
            solve(i+1,nums,ans,ds,n);
            ds.pop_back();
        }

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        solve(0,nums,ans,ds,n);
        return ans;
    }
};