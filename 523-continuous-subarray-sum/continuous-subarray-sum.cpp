class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int sum=0;
        unordered_map<int,int>mp;
        mp[0]=-1;        //0 can also aoccur in modulo
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            int mod=sum%k;
            if(mp.find(mod)!=mp.end())
            {
                int len=i-mp[mod];
                if(len>=2) return true;
            }
            else 
            mp[mod]=i;
        }
        return false;
    }
};