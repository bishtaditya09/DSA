class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>pre(n+1,0);
        for(int i=0;i<n;i++)
        {
            pre[i+1]=pre[i]+(nums[i]==target);
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                 int cnt=pre[j+1]-pre[i];
                 if(cnt>(j-i+1)/2) ans++;
            }
        }
        return ans;
    }
};