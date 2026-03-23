class Solution {
public:
    static bool comp(vector<int>&a,vector<int>&b)
    {
        return a[1]<b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& inter) {
        int n=inter.size();
        int cnt=1;
        sort(inter.begin(),inter.end(),comp);
        int last=inter[0][1];
        int i=1;
        while(i<n)
        {
            if(inter[i][0]>=last)
            {
                cnt+=1;
                last=inter[i][1];
            }
            i++;
        }
        return n-cnt;
    }
};