class Solution {
public:
    int heightChecker(vector<int>& ht) {
        int n=ht.size();
        vector<int>cnt(101,0);
        for(auto x:ht)
        cnt[x]++;

        int idx=0,cn=0;
        for(int i=1;i<=100;i++)
        {
            while(cnt[i])
            {
                if(i!=ht[idx])
                cn++;
                idx++;
                cnt[i]--;
            }
        }
        return cn;
    }
};