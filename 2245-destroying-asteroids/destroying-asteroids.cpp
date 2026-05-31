class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& ast) {
        sort(ast.begin(),ast.end());
        int cnt=0;
        int n=ast.size();
        long long ans=mass;
        for(int i=0;i<n;i++)
        {
            if(ans>=ast[i])
            {
                ans+=ast[i];
                cnt++;
            }
        }
        return cnt==ast.size();
    }
};