class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum=0,x=0;
        int rev=0;
        while(n)
        {
            int r=n%10;
            n=n/10;
            if(r==0) continue;
            rev=rev*10+r;
            x+=r; 
        }
        int rev2=0;
        while(rev)
        {
            int r=rev%10;
            rev2=rev2*10+r;
            rev=rev/10;
        }
        return rev2*x;
    }
};