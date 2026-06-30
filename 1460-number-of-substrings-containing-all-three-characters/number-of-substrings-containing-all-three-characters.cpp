class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        int le=0,ri=0,cnt=0;
        unordered_map<int,int>mp;
        while(ri<n)
        {
          mp[s[ri]]++;
          while(mp.size()==3)
          {
              cnt+=n-ri;
              mp[s[le]]--;
              if(mp[s[le]]==0)
              mp.erase(s[le]);
              le++;
          }
          ri++;
        }
        return cnt;
    }
};