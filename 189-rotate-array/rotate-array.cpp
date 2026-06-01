class Solution {
public:
    void rev(vector<int>&arr,int st,int en)
    {
        while(st<en)
        {
            swap(arr[st],arr[en]);
            en--;
            st++;
        }
    }
    void rotate(vector<int>& arr, int k) {
        k=k%arr.size();
        int n=arr.size();
        rev(arr,0,n-k-1);
        rev(arr,n-k,n-1);
        rev(arr,0,n-1);
        
    }
};