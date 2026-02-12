class Solution {
public:
    bool isbal(vector<int>&freq)
    {
        int com=0;
        for(int i=0;i<26;i++)
        {
            if(freq[i]==0) continue;
            if(com==0) com=freq[i];
            else if(freq[i]!=com)
            return false;
        }
        return true;
    }
    int longestBalanced(string s) {
        int n=s.size();
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            vector<int>hash(26,0);
            for(int j=i;j<n;j++)
            {
                 hash[s[j]-'a']++;
                 if(isbal(hash))
                 {
                    maxi=max(maxi,j-i+1);
                 }
            }
        }
        return maxi;
    }
};