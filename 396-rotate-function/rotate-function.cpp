class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        long long sum=0;
        int n=nums.size();
        int og=0; //yeah original sum ko store karega
        for(int i=0;i<n;i++)
        {
            og+=nums[i];
            sum+=1ll*nums[i]*i;
        }
        
        long long maxi=sum;
        for(int k=0;k<n-1;k++)
        {
            sum=sum+og-n*nums[n-1-k];
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};