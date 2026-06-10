class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int n=nums.size();
        int le=0,ri=0;
        long long mini=LLONG_MAX,maxi=LLONG_MIN;
        for(int i=0;i<n;i++)
        mini=min(mini,1LL*nums[i]);

        for(int i=0;i<n;i++)
        maxi=max(maxi,1LL*nums[i]);

        long long ans=(maxi-mini)*k;
        return ans;
    }
};