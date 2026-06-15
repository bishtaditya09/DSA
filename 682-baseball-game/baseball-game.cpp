class Solution {
public:
    int calPoints(vector<string>& ops) {
        int sum=0;
        int n=ops.size();
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            if(ops[i]=="C")
            st.pop();
            else if(ops[i]=="D")
            {
                st.push(2*st.top());
            }
            else if(ops[i]=="+")
            {
                int a=st.top();
                st.pop();
                int b=st.top();
                st.push(a);
                st.push(a+b);
            }
            else
            st.push(stoi(ops[i]));
        }
        while(!st.empty()){ 
        sum+=st.top();
        st.pop();
       }
        return sum;
    }
};