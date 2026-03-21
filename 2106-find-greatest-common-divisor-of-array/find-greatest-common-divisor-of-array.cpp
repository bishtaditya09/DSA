class Solution {
public:
    int gcd(int i,int j)
    {
         while(j!=0)
         {
            int temp=j;
            j=i%j;
            i=temp;
         }
         return i;
    }
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        return gcd(nums[0],nums[n-1]);
    }
};