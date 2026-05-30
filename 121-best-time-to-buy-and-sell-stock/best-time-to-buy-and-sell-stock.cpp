class Solution {
public:
    int maxProfit(vector<int>& pr) {
        int maxi=INT_MIN;
        int n=pr.size();
        int pro;
        int mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            mini=min(mini,pr[i]);
            pro=pr[i]-mini;
            maxi=max(maxi,pro);
        }
        return maxi;
    }
};