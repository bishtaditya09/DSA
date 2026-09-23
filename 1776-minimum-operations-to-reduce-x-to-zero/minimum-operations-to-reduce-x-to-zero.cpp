class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum=0;
        int n=nums.size();
        int le=0,ri=0;
        int mini=-1;
        int tot=0;
        for(auto it:nums)
        tot+=it;
        int ta=tot-x;
        if(ta<0) return -1;
        while(ri<n)
        {
             sum+=nums[ri];
             while(sum>ta)
             {
                 sum-=nums[le];
                 le++;
             }
             if(sum==ta)
             mini=max(mini,ri-le+1);
             ri++;
        }
        return mini==-1?-1:n-mini;
    }
};