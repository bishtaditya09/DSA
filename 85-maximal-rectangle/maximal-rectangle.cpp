class Solution {
public:
    int large(vector<int>& nums) {
        int n=nums.size();
        stack<int>st;
        int pse,nse;
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && nums[i]<=nums[st.top()]){
            int el=st.top();
            st.pop();
            nse=i;
            pse=st.empty()?-1:st.top();
            maxi=max(maxi,nums[el]*(nse-pse-1));
           }
            st.push(i);
        }
          while(!st.empty()){
            int el=st.top();
            st.pop();
            nse=n;
            pse=st.empty()?-1:st.top();
            maxi=max(maxi,nums[el]*(nse-pse-1));
           }
        return maxi;
    }
    int maximalRectangle(vector<vector<char>>& mat) {
        int n=mat.size(),m=mat[0].size();
        vector<vector<int>>pre(n,vector<int>(m));
        for(int j=0;j<m;j++)
        {
           int  sum=0;
            for(int i=0;i<n;i++)
            {
                sum=(mat[i][j]=='1')?sum+1:0;
                pre[i][j]=sum;
            }
        }
        int maxi=0;
        for(int i=0;i<n;i++)
        maxi=max(maxi,large(pre[i]));
        return maxi;
    }
};