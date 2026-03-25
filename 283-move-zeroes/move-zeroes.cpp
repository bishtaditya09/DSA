class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int le=0,ri=0;
        while(ri<nums.size())
        {
            if(nums[ri]!=0)
            {
                swap(nums[le],nums[ri]);
                le++;
            }
            ri++;
        }
    }
};