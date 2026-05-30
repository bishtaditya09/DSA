class Solution {
public:
    vector<int> countBits(int n) {
     int cnt;
     vector<int>ans(n+1,0);
     for(int i=1;i<=n;i++)
     {
        ans[i]=ans[i&(i-1)]+1;
     }
     return ans;
    }
};