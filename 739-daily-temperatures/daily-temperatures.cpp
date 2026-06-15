class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& tp) {
        stack<int>st;
        int n=tp.size();
        vector<int>ans(n);
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && tp[i]>=tp[st.top()])
            st.pop();

            ans[i]=st.empty()?0:st.top()-i;
            st.push(i);
        }
        return ans;
    }
};
