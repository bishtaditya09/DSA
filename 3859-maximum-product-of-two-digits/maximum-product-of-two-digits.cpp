class Solution {
public:
    int maxProduct(int n) {
        int fi=0,se=0;
        while(n)
        {
             int x=n%10;
             if(x>fi)
             {
                 se=fi;
                 fi=x;
             }
             else if(x>se)
             se=x;
             n/=10;
        }
        return fi*se;
    }
};