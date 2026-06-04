class Solution {
public:
    int trap(vector<int>& ht) {
        int n=ht.size();
        int le=0,ri=n-1;
        int tw=0;
        int lmax=0,rmax=0;
        while(le<ri)
        {
            if(ht[le]<=ht[ri])    //choti value compare karke 
            {
                if(ht[le]<lmax)
                tw+=lmax-ht[le];
                else
                lmax=ht[le];
                le++;
            }
            else
            {
                if(ht[ri]<rmax)
                tw+=rmax-ht[ri];
                else
                rmax=ht[ri];
                ri--;
            }
        }
        return tw;
    }
};