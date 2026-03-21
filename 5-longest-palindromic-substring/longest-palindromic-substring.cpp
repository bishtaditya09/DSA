class Solution {
public:
    bool ispal(string &s,int i,int j)
    {
        int len=(j-i)+1;
        int ri=j;
        int le=i;
        while(le<ri)
        {
            if(s[ri--]!=s[le++])
            return false;
        }
        return true;
    }
    string longestPalindrome(string s) {
        int n=s.size();
        int maxi=INT_MIN;
        
        string ans;
       for(int i=0;i<n;i++)
       {
        int len=0;
        for(int j=i;j<n;j++)
        {
           if(ispal(s,i,j))
           {
              len=j-i+1;
              if(len>maxi)
              {
                 maxi=len;
                 ans=s.substr(i,j-i+1);
           }
           }
          }
       }
       return ans;
    }
};