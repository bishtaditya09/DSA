class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return true;
        unordered_map<int,int>mp;
        for(int num:nums)
        mp[num]++;
        int mid=n/2;
        return mp[nums[mid]]==1?true:false;
    }
};