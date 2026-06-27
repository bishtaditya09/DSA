class Solution {
public:
    long long countMajoritySubarrays(vector<int>& nums, int target) {
        long long res=0,val=0;
        int n=nums.size(),csum=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int j=0;j<n;j++)
        {
             if(nums[j]==target)
             {
                 val+=mp[csum];
                 csum++;
             }
             else
             {
                csum--;
                val-=mp[csum];
             }
             res+=val;
             mp[csum]+=1;
        }
        return res;
    }
};