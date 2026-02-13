class Solution {
public:
   void solve(int ind,vector<int>&can,vector<int>&ds,vector<vector<int>>&ans,int ta)
   {
      if(ta==0)
      {
        ans.push_back(ds);
        return;
      }
      for(int i=ind;i<can.size();i++)
      {
        if(i>ind && can[i]==can[i-1]) continue;
        if(can[i]>ta) break;
        ds.push_back(can[i]);
        solve(i+1,can,ds,ans,ta-can[i]);
        ds.pop_back();
      }
   }
    vector<vector<int>> combinationSum2(vector<int>& can, int target) {
       sort(can.begin(),can.end());
       vector<int>ds;
       vector<vector<int>>ans;
       solve(0,can,ds,ans,target);
       return ans;
    }
};