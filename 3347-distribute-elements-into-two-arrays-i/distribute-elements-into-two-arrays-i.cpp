class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>t1,t2;
        vector<int>res;
        t1.push_back(nums[0]);
        t2.push_back(nums[1]);
        for(int i=2;i<n;i++)
        {
             if(t1.back()>t2.back())
             t1.push_back(nums[i]);
             else
             t2.push_back(nums[i]);
        }
        for(int i=0;i<t1.size();i++) res.push_back(t1[i]);
        for(int j=0;j<t2.size();j++) res.push_back(t2[j]);
        return res;
    }
};