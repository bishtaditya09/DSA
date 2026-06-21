class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int cnt=0;
        int n=costs.size();
        int i=0;
        while(coins && i<n)
        {
            if(coins>=costs[i])
            {
                cnt++;
                coins-=costs[i];
                i++;
            }
            else
            i++;
        }
        return cnt;
    }
};