class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>hash(256);
        for(int i=0;i<256;i++) hash[i]=-1;
        int le=0,ri=0;
        int n=s.size();
        int len=0,maxl=0;
        while(ri<n)
        {
            if(hash[s[ri]]!=-1)
            {
                if(hash[s[ri]]>=le)
                {
                    le=hash[s[ri]]+1;
                }
            }
            len=ri-le+1;
            maxl=max(len,maxl);
            hash[s[ri]]=ri;
            ri++;
        }
        return maxl;
    }
};