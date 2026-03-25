class Solution {
public:
    int candy(vector<int>& ra) {
        vector<int>le(ra.size(),0);
        vector<int>ri(ra.size(),0);
        int n=ra.size();
        le[0]=1;
        for(int i=1;i<n;i++)
        {
            if(ra[i]>ra[i-1])
            {
                le[i]=le[i-1]+1;
            }
            else
            {
                le[i]=1;
            }
        }
        ri[n-1]=1;
        for(int i=n-2;i>=0;i--)
        {
            if(ra[i]>ra[i+1])
            {
                ri[i]=ri[i+1]+1;
            } 
            else
            {
                ri[i]=1;
            }
        }
        int sum=0;
        for(int i=0;i<n;i++) sum+=max(le[i],ri[i]);
        return sum;
    }
};