class Solution {
public:
    string smallestSubsequence(string s) {
        stack<char>st;
        int n=s.size();
        string ans="";
        vector<int>oc(26);
        vector<bool>vis(26,false);
        for(int i=0;i<n;i++)
        oc[s[i]-'a']=i;   //akhiri occurence store karne ke liye


        for(int i=0;i<n;i++)
        {
             if(vis[s[i]-'a'])
             continue;
             while(!st.empty() && st.top()>s[i] && oc[st.top()-'a']>i){
             vis[st.top()-'a']=false;
             st.pop();
             }

             st.push(s[i]);
             vis[s[i]-'a']=true;
        }
        while(!st.empty())
        {
             ans+=st.top();
             st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};