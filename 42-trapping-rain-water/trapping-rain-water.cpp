class Solution {
public:
    int trap(vector<int>& ht) {
         int n=ht.size();
         vector<int>lmax(n,0);
         vector<int>rmax(n,0);
         lmax[0]=ht[0];
         for(int i=1;i<n;i++)
         {
            lmax[i]=max(ht[i],lmax[i-1]);
         }
         rmax[n-1]=ht[n-1];
         for(int j=n-2;j>=0;j--)
         {
             rmax[j]=max(rmax[j+1],ht[j]);
         }
         int tw=0;
         for(int i=0;i<n;i++)
         tw+=min(lmax[i],rmax[i])-ht[i];

         return tw;
    }
};