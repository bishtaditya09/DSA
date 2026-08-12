class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int maxi=INT_MIN;
        int n=nums.size(),len=0;
        unordered_map<int,int>mp;
        int le=0,ri=0;
        while(ri<n)
        {
              mp[nums[ri]]++;
              while(mp[nums[le]]>k || mp[nums[ri]]>k)
              {
                   mp[nums[le]]--;
                   if(mp[nums[le]]==0)
                   mp.erase(nums[le]);
                   le++;
              }
              if(mp[nums[ri]]<=k)
              len=ri-le+1;
              maxi=max(maxi,len);
              ri++;
        }
        return maxi;
    }
};