class Solution {
public:
    vector<int> pse(vector<int>&nums)
    {
         int n=nums.size();
         vector<int>ps(n);
         stack<int>st;
         for(int i=0;i<n;i++)
         {
            while(!st.empty() && nums[st.top()]>=nums[i])
            st.pop();

            ps[i]=st.empty()?-1:st.top();

            st.push(i);
         }
         return ps;
    }
    vector<int> nse(vector<int>&nums)
    {
         int n=nums.size();
         vector<int>ns(n);
         stack<int>st;
         for(int i=n-1;i>=0;i--)
         {
            while(!st.empty() && nums[st.top()]>=nums[i])
            st.pop();

            ns[i]=st.empty()?n:st.top();

            st.push(i);
         }
         return ns;
    }
    int largestRectangleArea(vector<int>& ht) {
        int n=ht.size();
        vector<int>ps=pse(ht);
        vector<int>ns=nse(ht);
        int maxi=0;
        for(int i=0;i<n;i++)
        {
           maxi=max(maxi,ht[i]*(ns[i]-ps[i]-1));
        }
        return maxi;
    }
};