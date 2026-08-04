class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        vector<int>ans;
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
             maxi=max(maxi,nums[i]);
             mini=min(mini,nums[i]);
             mp[nums[i]]++;
        }
        for(int i=mini;i<=maxi;i++)
        {
            if(!mp[i])
            ans.push_back(i);
        }
        return ans;
    }
};