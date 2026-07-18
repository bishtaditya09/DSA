class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxi=INT_MIN,mini=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,nums[i]);
            mini=min(mini,nums[i]);
        }
        return __gcd(mini,maxi);
    }
};