class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int maxl=0;
        int st=0;
        for(int i=0;i<n;i++)
        {
            //Odd ke case mein
            int le=i,ri=i;
            while(le>=0 && ri<n && s[ri]==s[le])
            {
                if(ri-le+1>maxl)
                {
                    st=le;
                    maxl=ri-le+1;
                }
                le--;
                ri++;
            }

            //Even ke case
            le=i,ri=i+1;
            while(le>=0 && ri<n && s[ri]==s[le])
            {
                if(ri-le+1>maxl)
                {
                    st=le;
                    maxl=ri-le+1;
                }
                le--;
                ri++;
            }
        }
        return s.substr(st,maxl);
    }
};