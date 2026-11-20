class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto it:nums)
        mp[it]++;
        int el=0;
        for(int i=0;i<nums.size();i++){
        if(mp[nums[i]]==1)
        el=nums[i];
        }
        return el;
    }
};