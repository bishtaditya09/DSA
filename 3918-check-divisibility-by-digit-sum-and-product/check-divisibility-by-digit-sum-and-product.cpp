class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int pr=1,num=n;
        while(num)
        {
             int r=num%10;
             sum+=r;
             pr*=r;
             num/=10;
        }
        return (n%(sum+pr)==0)?true:false;
    }
};