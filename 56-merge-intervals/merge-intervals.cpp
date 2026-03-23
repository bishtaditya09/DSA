class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inter) {
        int n=inter.size();
        sort(inter.begin(),inter.end());
        vector<vector<int>>ans;
        for(int i=0;i<n;i++)
        {
            if(ans.empty() || ans.back()[1]<inter[i][0])
            ans.push_back(inter[i]);
            else
            {
                ans.back()[1]=inter[i][1]=max(inter[i][1],ans.back()[1]);
            }
        }
        return ans;
    }
};