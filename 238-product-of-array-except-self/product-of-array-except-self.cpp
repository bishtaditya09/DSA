class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        int pre=1;         //pehle ki values store karne ke liye
        for(int i=0;i<n;i++)
        {
            ans[i]=pre;
            pre*=nums[i];
        }
        int suf=1;        //bad ki values store
        for(int i=n-1;i>=0;i--)
        {
            ans[i]*=suf;
            suf*=nums[i];
        }
        return ans;
    }
};