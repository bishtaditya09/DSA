class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sumi=0,maxi;
        for(int i=0;i<k;i++) sumi+=nums[i];
        maxi=sumi;
        int i=k;
        while(i<nums.size())
        {
            sumi-=nums[i-k];
            sumi+=nums[i];
            maxi=max(maxi,sumi);
            i++;
        }
        return (double)maxi/k;
    }
};