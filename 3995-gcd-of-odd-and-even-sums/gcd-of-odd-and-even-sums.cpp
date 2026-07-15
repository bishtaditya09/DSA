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
        int es=0,os=0;
        int k=1,j=2;
        for(int i=1;i<=n;i++)
        {
             os+=k;
             k+=2;
             
             es+=j;
             j+=2;
        }
        return gcd(os,es);
    }
};