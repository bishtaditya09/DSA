class Solution {
public:
    int heightChecker(vector<int>& ht) {
        vector<int>ans=ht;
        sort(ans.begin(),ans.end());
        int cnt=0;
        for(int i=0;i<ans.size();i++)
        {
             cnt+=(ans[i]!=ht[i])?1:0; 
        }
        return cnt;
    }
};