class Solution {
public:
    int totalFruit(vector<int>& fru) {
        int n=fru.size();
        unordered_map<int,int>hash;
        int le=0,ri=0;
        int maxl=0;
        while(ri<n)
        {
             hash[fru[ri]]++;
             while(hash.size()>2)
             {
                 hash[fru[le]]--;
                 if(hash[fru[le]]==0)
                 hash.erase(fru[le]);
                 le++;
             }
            ri++;
            int len=ri-le;
            maxl=max(len,maxl);
        }
       return maxl;
    }
};