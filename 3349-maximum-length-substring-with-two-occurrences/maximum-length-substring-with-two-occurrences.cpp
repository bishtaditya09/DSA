class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.size();
        int ri=0,le=0;
        int maxi=INT_MIN;
        unordered_map<int,int>mp;
        while(ri<n)
        {
             mp[s[ri]]++;
             while(mp[s[ri]]>2)
             {
                  mp[s[le]]--;
                  le++;
             }
             maxi=max(maxi,ri-le+1);
             ri++;
        }
        return maxi;
    }
};