class Solution {
public:
    static bool comp(vector<int>&a,vector<int>&b)
    {
        if(a[0]==b[0])
        return a[1]>b[1];

        return a[0]<b[0];
    }
    int removeCoveredIntervals(vector<vector<int>>& inv) {
        int n=inv.size();
        int cnt=1;
        sort(inv.begin(),inv.end(),comp);
        int maxi=inv[0][1];
        for(int i=1;i<n;i++)
        {
             if(inv[i][1]<=maxi)
             continue;
             cnt++;
             maxi=inv[i][1];
        }
      return cnt;
    }
};