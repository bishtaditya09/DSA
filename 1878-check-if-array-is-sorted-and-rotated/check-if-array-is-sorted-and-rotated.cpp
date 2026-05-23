class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int ns=0;   //checks for the condition prev index greater than next
        int i=0,j;
        while(i<n)
        {
            j=(i+1)%n;
            if(nums[i]>nums[j])
            {
                ns++;        
                if(ns>1) return false;
            }
            i++;
        } 
        return true;
    }
};