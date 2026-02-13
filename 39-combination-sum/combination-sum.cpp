class Solution {
public:
    void sum(int i,vector<int>&can,vector<vector<int>>&ans,vector<int>&ds,int ta,int csum)
    {
      if(csum>ta)
      {
        return;
      }
       if(csum==ta)
        {
            ans.push_back(ds);
            return;
        }
        if(i>=can.size())
        {
            return;
        }
        ds.push_back(can[i]);
        sum(i,can,ans,ds,ta,csum+can[i]);
        ds.pop_back();
        sum(i+1,can,ans,ds,ta,csum);
    }
    vector<vector<int>> combinationSum(vector<int>& can, int target) {
        int n=can.size();
        vector<vector<int>>ans;
        vector<int>ds;
        int csum=0;
        sum(0,can,ans,ds,target,csum);
        return ans;
    }
};