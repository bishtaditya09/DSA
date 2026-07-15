class Solution {
public:
    int gcd(int a,int b)
    {
         while(b!=0)
         {
             int temp=a%b;
             a=b;
             b=temp;
         }
         return a;
    }
    int gcdOfOddEvenSums(int n) {
        int es=n*(n+1),os=n*n;
        return gcd(os,es);
    }
};