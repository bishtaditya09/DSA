class Solution {
public:
    void solve(int ind,string s,vector<string>&ds,vector<vector<string>>&ans)
    {
        if(ind>=s.size())
        {
        ans.push_back(ds);
        return;
        }
        for(int i=ind;i<s.size();i++)
        {
            if(isPal(s,ind,i))
            {
                ds.push_back(s.substr(ind,i-ind+1));
                solve(i+1,s,ds,ans);
                ds.pop_back();
            }
        }
    }
    bool isPal(string s,int st,int en)
    {
         while(st<=en)
         {
            if(s[st++]!=s[en--])
            return false;
         }
         return true;
    }
    vector<vector<string>> partition(string s) {
        vector<string>ds;
        vector<vector<string>>ans;
        solve(0,s,ds,ans);
        return ans;
    }
};