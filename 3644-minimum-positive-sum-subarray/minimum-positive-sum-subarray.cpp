class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int msum=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
             int sum=0;
             for(int j=i;j<n;j++)
             {
                   sum+=nums[j];
                   int len=j-i+1;
                   if(sum>0 && (len<=r && len>=l))
                   msum=min(msum,sum);
                   if(len>=r)
                   break;
             }
        }
        return msum==INT_MAX?-1:msum;

    }
};