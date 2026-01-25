class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1 || k==1)
        return 0;
        int mn=INT_MAX;
        int dif=0;
        sort(nums.begin(),nums.end());
         for (int i=0;i+k-1<n;i++)
          {
            dif=nums[i+k-1]-nums[i];
            mn=min(mn,dif);
        }
        return mn;
    }
};