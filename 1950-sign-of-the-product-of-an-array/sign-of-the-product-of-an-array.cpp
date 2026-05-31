class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ns=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]<0)
            ns++;
            else if(nums[i]==0)
            return 0;
        }
        return (ns%2)?-1:1;
    }
};