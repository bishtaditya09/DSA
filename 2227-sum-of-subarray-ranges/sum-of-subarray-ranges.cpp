class Solution {
public:
    long long submini(vector<int>&arr)
     {
        int n=arr.size();
        stack<int>st,st2;
        vector<int>psee(n);
        vector<int>nse(n);
        long long sum=0;
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && arr[i]<=arr[st.top()])
            st.pop();
            
            nse[i]=st.empty()?n:st.top();
            
            st.push(i);
        }
        for(int i=0;i<n;i++)
        {
            while(!st2.empty() && arr[i]<arr[st2.top()])
            st2.pop();
            
            psee[i]=st2.empty()?-1:st2.top();
            
            st2.push(i);
        }

        for(int i=0;i<n;i++)
        {
          int le=i-psee[i];
          int ri=nse[i]-i;
          sum+=le*ri*1ll*arr[i];
       } 
       return sum;
    }
    long long submax(vector<int>&arr)
     {
        int n=arr.size();
        stack<int>st,st2;
        vector<int>pgee(n);
        vector<int>nge(n);
        long long sum=0;
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && arr[i]>=arr[st.top()])
            st.pop();
            
            nge[i]=st.empty()?n:st.top();
            
            st.push(i);
        }
        for(int i=0;i<n;i++)
        {
            while(!st2.empty() && arr[i]>arr[st2.top()])
            st2.pop();
            
            pgee[i]=st2.empty()?-1:st2.top();
            
            st2.push(i);
        }

        for(int i=0;i<n;i++)
        {
          int le=i-pgee[i];
          int ri=nge[i]-i;
          sum+=le*ri*1ll*arr[i];
       } 
       return sum;
    }
    
    
    long long subArrayRanges(vector<int>& nums) {
        return submax(nums)-submini(nums);
    }
};