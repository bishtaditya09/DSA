class Solution {
public:
    vector<int> countBits(int n) {
     int cnt;
     vector<int>ans(n+1,0);
     for(int i=0;i<=n;i++)
     {
         int x=i;
         cnt=0;
         while(x)
         {
            cnt++;
            x=x&x-1;
         }
         ans[i]=cnt;
     }
     return ans;
    }
};