class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int csum=0,cnt=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
             csum+=nums[i];
             int rem=((csum%k)+k)%k;
             if(mp.find(rem)!=mp.end())
             cnt+=mp[rem];
             mp[rem]+=1;
        }
        return cnt;
    }
};