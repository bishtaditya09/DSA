class Solution {
public:
    int cnt(int n)
    {
        int on=1,tw=1;
        for(int i=1;i<n;i++)
        {
           int temp=tw;
            tw=on+tw;
            on=temp;
        }
        return tw;
    }
    int climbStairs(int n) {
        return cnt(n);
    }
};