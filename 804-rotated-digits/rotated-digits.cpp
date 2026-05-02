class Solution {
public:
    bool isgood(int i)
    {
         bool chng=false;
         while(i>0)
         {
            int dig=i%10;
            if(dig==3 || dig==4 || dig==7)
            return false;
            else if(dig==2 || dig==5 || dig==6 || dig==9)
            chng=true;
            i=i/10;
         }
         return chng;
    }
    int rotatedDigits(int n) {
       int cnt=0;
       for(int i=1;i<=n;i++)
       {
           if(isgood(i))
           cnt++;
       }
       return cnt;
    }
};