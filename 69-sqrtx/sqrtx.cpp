class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        int lo=1,hi=x;
        int ans=1;
        while(lo<=hi)
        {
             int mid=lo+(hi-lo)/2;
             long long val=1L*mid*mid;
             if(val<=x)
             {
                 ans=mid;
                 lo=mid+1;
             }
             else
             hi=mid-1;
        }
        return ans;
    }
};