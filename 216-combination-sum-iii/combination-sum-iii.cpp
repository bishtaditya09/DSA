class Solution {
public:
    void solve(int ind,int n,int k,vector<int>&ds,vector<vector<int>>&ans,int csum)
    {
          if(csum==n && ds.size()==k)
          {
            ans.push_back(ds);
            return;
          }
          if(csum>n || ind>9)
          {
            return;
          }
          for(int i=ind;i<=9;i++)
          {
             ds.push_back(i);
             solve(i+1,n,k,ds,ans,csum+i);
             ds.pop_back();
          }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>ds;
        vector<vector<int>>ans;
        int csum=0;
        solve(1,n,k,ds,ans,csum);
        return ans;
    }
};