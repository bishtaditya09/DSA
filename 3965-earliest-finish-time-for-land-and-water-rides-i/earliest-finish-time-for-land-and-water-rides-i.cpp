class Solution {
public:
    int earliestFinishTime(vector<int>& ls, vector<int>& ld, vector<int>& ws, vector<int>& wd) {
      int n=ls.size();
      int m=ws.size();
      int ans=INT_MAX;
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
            int lval=ls[i]+ld[i];
            ans=min(ans,max(lval,ws[j])+wd[j]);

            int wval=ws[j]+wd[j];
            ans=min(ans,max(wval,ls[i])+ld[i]);
        }
      }
      return ans;
    }
};