class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;
        int n=num.size();
        if(k==n) return "0";
        for(int i=0;i<n;i++)
        {
             while(!st.empty() && st.top()>num[i] && k>0){
             st.pop();
             k--;
             }
            st.push(num[i]);
        }
        while(!st.empty() && k){
        st.pop();
        k--;
        }
        if(st.empty()) return "0";
        string ans="";
        while(!st.empty()){
        ans+=st.top();
        st.pop(); 
        } 
        while(!ans.empty() && ans.back()=='0')
        ans.pop_back();
        reverse(ans.begin(),ans.end());
        if(ans.empty()) return "0";
        return ans;
    }
};