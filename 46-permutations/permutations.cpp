class Solution {
public:
    void solve(vector<int>&nums,vector<bool>freq,vector<int>&ds,vector<vector<int>>&ans)
    {
        if(ds.size()==nums.size())
        {
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(!freq[i])
            {
                ds.push_back(nums[i]);
                freq[i]=true;
                solve(nums,freq,ds,ans);
                ds.pop_back();
                freq[i]=false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int n=nums.size();
        vector<bool>freq(n,false);
        vector<int>ds;
        solve(nums,freq,ds,ans);
        return ans;
    }
};