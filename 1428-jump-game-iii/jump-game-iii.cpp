class Solution {
public:
    bool soln(int i,vector<int>&arr,vector<int>&vis)
    {
        if(i<0 || i>=arr.size() || vis[i]) return false;
        if(arr[i]==0) return true;
        vis[i]=1;
        return (soln(i+arr[i],arr,vis)|| soln(i-arr[i],arr,vis));
    } 
    bool canReach(vector<int>& arr, int start) {
        vector<int>vis(arr.size(),0);
        return soln(start,arr,vis);
    }
};