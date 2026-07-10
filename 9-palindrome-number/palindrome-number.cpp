class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int rev=0,r;
        int num=x;
        while(x)
        {
            r=x%10;
            if(rev>INT_MAX/10) return false;
            rev=rev*10+r;
            x=x/10;
        }
      return num==rev;
    }
};