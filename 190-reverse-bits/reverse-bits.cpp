class Solution {
public:
    int reverseBits(int n) {
        int res=0;
        int i=0;
        while(i<32)
        {
           res=res<<1;
           res=res|(n&1);
           n=n>>1;
           i++;
        }
        return res;
    }
};