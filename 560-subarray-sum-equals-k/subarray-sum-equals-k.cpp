class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       unordered_map<int,int>mp;
       mp[0]=1;
       int csum=0,cnt=0;
       int n=nums.size();
       for(int i=0;i<n;i++)
       {
          csum+=nums[i];
          if(mp.find(csum-k)!=mp.end())
          cnt+=mp[csum-k];
          mp[csum]+=1;
       } 
       return cnt;
    }
};