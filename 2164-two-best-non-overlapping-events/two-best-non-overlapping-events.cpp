class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& ev) {
        int n=ev.size();
        sort(ev.begin(),ev.end());
        vector<int>suff(n);  //suffix sum ke liye  
        vector<int>st(n);    //start time ke liye
        for(int i=0;i<n;i++) st[i]=ev[i][0];

        suff[n-1]=ev[n-1][2];
        for(int i=n-2;i>=0;i--)
        suff[i]=max(suff[i+1],ev[i][2]);
  
        int ans=0;
        for(int i=0;i<n;i++)
        { 
            int val=ev[i][2];
            int en=ev[i][1];

            //single case ke liye
            ans=max(ans,val);
            int j=upper_bound(st.begin(),st.end(),en)-st.begin();
            if(j<n)
            {
                ans=max(ans,val+suff[j]);
            }
        }
        return ans;
    }
};