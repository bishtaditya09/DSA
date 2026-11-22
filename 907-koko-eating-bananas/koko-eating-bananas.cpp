class Solution {
public:
    long long reqTime(vector<int>&v,int x)
    {
         int n=v.size();
         long long sum=0;
         for(int i=0;i<n;i++)
         sum+=(v[i]+(long long)x-1)/x;
         return sum;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int lo=1;
        int hi=*max_element(piles.begin(),piles.end());
        int ans=0;
        while(lo<=hi)
        {
             int mid=lo+(hi-lo)/2;
             long long tot=reqTime(piles,mid);
             if(tot<=h)
             {
                 ans=mid;
                 hi=mid-1;
             }
             else
             lo=mid+1;
        }
        return ans;
    }
};