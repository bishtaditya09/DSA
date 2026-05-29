class Solution {
public:
    int minElement(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int n=nums[i];
            int s=0;
            while(n)
             {
              s+=n%10;
              n=n/10;
            }
         mini=min(mini,s);
        }
        return mini;
    }
};