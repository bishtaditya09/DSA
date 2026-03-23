class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& inter, vector<int>& newInterval) {
        vector<vector<int>>ans;
        int i=0;
        int n=inter.size();
        //left non overlapping part
        while(i<n && inter[i][1]<newInterval[0])
        {
            ans.push_back(inter[i]);
            i++;
        }
        while(i<n && newInterval[1]>=inter[i][0])
        {
            newInterval[0]=min(newInterval[0],inter[i][0]);
            newInterval[1]=max(newInterval[1],inter[i][1]);
            i++;
        }
        ans.push_back(newInterval);
        while(i<n)
        {
            ans.push_back(inter[i]);
            i++;
        }
        return ans;
        

    }
};