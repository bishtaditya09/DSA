class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int n=arr.size();
        vector<int>cnt(n+1,0);
        for(int i=0;i<n;i++)
        {
            cnt[min(n,arr[i])]++;      //n se badi value consider hi nahi karni
        }
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            if(cnt[i]>0)
            ans=min(ans+cnt[i],i);
        }
        return ans;
    }
};