class Solution {
public:
    bool ispal(string &s,int le,int ri)
    {
         while(le<ri)
         {
            if(s[le++]!=s[ri--]) return false;
         }
         return true;
    }
    bool validPalindrome(string s) {
        int n=s.size();
        int le=0,ri=n-1;
        while(le<ri)
        {
            if(s[ri]==s[le])
            {
                ri--;
                le++;
            }
            else
            {
                return (ispal(s,le+1,ri) || ispal(s,le,ri-1));
            }
        }
        return true;
    }
};