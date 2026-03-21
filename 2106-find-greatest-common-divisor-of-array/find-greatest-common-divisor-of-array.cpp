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
        int maxi=*max_element(nums.begin(),nums.end());
        int mini=*min_element(nums.begin(),nums.end());
        int n=nums.size();

        return gcd(mini,maxi);
    }
};