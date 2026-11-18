class Solution {
public:
    void sub(int ind,vector<vector<int>>&ans,vector<int>ds,vector<int>ar,int n)
    {
       if(ind==n)
       {
          ans.push_back(ds);
          return;
       }
       ds.push_back(ar[ind]);
       sub(ind+1,ans,ds,ar,n);
       ds.pop_back();
       sub(ind+1,ans,ds,ar,n);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        int n=nums.size();
        vector<int>ds;
        sub(0,ans,ds,nums,n);
        return ans;
    }
};