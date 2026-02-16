class Solution {
public:
    void solve(vector<string>&ans,int cl,int op,string s,int n) 
    {
        if(s.size()==2*n)
        {
            ans.push_back(s);
            return;
        }
        if(op<n)
        {
            solve(ans,cl,op+1,s+"(",n);
        }
        if(cl<op)
        {
            solve(ans,cl+1,op,s+")",n);
        }

    }
    vector<string> generateParenthesis(int n) {
    int cl=0,op=0;
    vector<string>ans;
    solve(ans,0,0,"",n);
    return ans;
    }
};