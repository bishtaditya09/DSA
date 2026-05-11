class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int st=ans.size();
            int ni=nums[i];
            while(ni>0)
            {
                ans.push_back(ni%10);
                ni/=10;
            }
            reverse(ans.begin()+st,ans.end());
        }
        return ans;
    }
};