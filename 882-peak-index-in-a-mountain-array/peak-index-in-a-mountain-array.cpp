class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int maxi=INT_MIN;
        int n=arr.size(),ind=-1;
        for(int i=0;i<n;i++)
        {
           if(maxi<arr[i])
           {
               maxi=arr[i];
               ind=i;
           }
        }
        return ind;
    }
};