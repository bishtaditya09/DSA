class Solution {
public:
    int largestRectangleArea(vector<int>& nums) {
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
};