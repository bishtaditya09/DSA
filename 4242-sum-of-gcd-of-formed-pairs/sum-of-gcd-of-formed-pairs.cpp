class Solution {
public:
    int gcd(int a,int b)
    {
         while(b!=0)
         {
             int tm=a%b;
             a=b;
             b=tm;
         }
         return a;
    }
    long long gcdSum(vector<int>& nums) {
         int mxi=nums[0];
         int n=nums.size();
         vector<int>pref(n);
         long long sum=0;
         for(int i=0;i<n;i++)
         {
             mxi=max(mxi,nums[i]);
             pref[i]=gcd(mxi,nums[i]);
         }
         sort(pref.begin(),pref.end());
         int i=0,j=n-1;
         while(i<j)
         {
              sum+=gcd(pref[i],pref[j]);
              i++;
              j--;
         }
         return sum;
    }
};