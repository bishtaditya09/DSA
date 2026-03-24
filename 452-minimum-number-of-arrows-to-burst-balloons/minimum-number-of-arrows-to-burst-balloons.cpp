class Solution {
public:
    static bool comp(vector<int>&a,vector<int>&b)
    {
        return a[1]<b[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
       sort(points.begin(),points.end(),comp);
       int n=points.size();
       int curr=points[0][1];
       int cnt=1;
       for(int i=1;i<n;i++)
       {
            if(curr<points[i][0])
            {
               cnt++;
               curr=points[i][1];
            }
       }
       return cnt;
    }
};