class Solution {
public:
    vector<int>Nse(vector<int>&arr,vector<int>&nse)
    {
        int n=arr.size();
        stack<int>st;
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && arr[i]<=arr[st.top()])
            st.pop();
            
            nse[i]=st.empty()?n:st.top();
            
            st.push(i);
        }
        return nse;
    }
     vector<int>Psee(vector<int>&arr,vector<int>&psee)
    {
         int n=arr.size();
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && arr[i]<arr[st.top()])
            st.pop();
            
            psee[i]=st.empty()?-1:st.top();
            
            st.push(i);
        }
        return psee;
    }
    
    int sumSubarrayMins(vector<int>& arr) {
       int n=arr.size();
       long long sum=0;
       long long MOD=1e9+7;
       vector<int>nse(n);
       vector<int>psee(n);    //previous smaller or equal 
       nse=Nse(arr,nse);
       psee=Psee(arr,psee);
       for(int i=0;i<n;i++)
       {
          int le=i-psee[i];
          int ri=nse[i]-i;
          sum=(sum+(le*ri*1ll*arr[i])%MOD)%MOD;
       } 
       return sum;
    }
};