class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        bool co=false;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1) 
            co=true;
            if(nums[i]<=0 || nums[i]>n)
            nums[i]=1;
        }
        if(!co) return 1;
        int idx;
        for(int i=0;i<n;i++)
        {
             int num=abs(nums[i]);
             idx=num-1;

             if(nums[idx]<0) continue;
             nums[idx]*=-1;
        }

        for(int i=0;i<n;i++)
        {
             if(nums[i]>0)
             return i+1;
        }
        return n+1;
    }
};