class Solution {
public:
    int digprod(int n)
    {
        int pr=1;
        while(n)
        { 
            int r=n%10;
            pr*=r;
            n=n/10;
        }
        return pr;
    }
    int smallestNumber(int n, int t) {
        while(true)
        {
              if(digprod(n)%t==0)
              return n;
              n++;
        }
    }
};