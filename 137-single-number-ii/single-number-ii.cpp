class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=0;
        for(int k=0;k<=31;k++)
        {
             int tm=(1<<k);
             int cnt=0;
             for(int num:nums)
             {
                 if((tm&num))
                 cnt++;
             }
             if(cnt%3==1)
             res=res | tm;
        }
        return res;
    }
};