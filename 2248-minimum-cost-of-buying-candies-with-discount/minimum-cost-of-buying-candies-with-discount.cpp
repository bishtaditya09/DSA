class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n=cost.size();
        if(n==1) return cost[0];
        if(n==2) return (cost[0]+cost[1]);
        sort(cost.rbegin(),cost.rend());
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if((i+1)%3==0) continue;
            sum+=cost[i];
        }
        return sum;
    }
};