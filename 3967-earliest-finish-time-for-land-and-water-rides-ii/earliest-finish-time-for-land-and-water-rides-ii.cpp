class Solution {
public:
    int finear(vector<int>&st1,vector<int>&sd1,vector<int>&st2,vector<int>&sd2)
    {
        int n=st1.size();
        int m=st2.size();
        int mini1=INT_MAX;
        for(int i=0;i<n;i++)
        {
            mini1=min(mini1,st1[i]+sd1[i]);
        }
        int mini2=INT_MAX;
        for(int j=0;j<m;j++)
        {
            mini2=min(mini2,max(mini1,st2[j])+sd2[j]);
        }
        return mini2;
    }
    int earliestFinishTime(vector<int>& ls, vector<int>& ld, vector<int>& ws, vector<int>& wd) {
         int fl=finear(ls,ld,ws,wd);
         int fw=finear(ws,wd,ls,ld);
         return min(fl,fw);
    }
};