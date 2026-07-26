class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=INT_MIN;
        int pre=1,suff=1;
        int n=nums.size();
        int i=0,j=n-1;
        while(i<n)
        {
               if(suff==0) suff=1;
               if(pre==0) pre=1;
               suff*=nums[j];
               pre*=nums[i];
               maxi=max(maxi,max(suff,pre));
               i++;
               j--;
        }
        return maxi;
    }
};