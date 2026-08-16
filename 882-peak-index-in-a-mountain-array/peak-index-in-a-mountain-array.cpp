class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int hi=n-2,lo=0;
        int ind=-1,maxi=INT_MIN;
        while(lo<=hi)
        {
             int mid=lo+(hi-lo)/2;
             if(arr[mid]>arr[mid+1])
             hi=mid-1;
             else
             lo=mid+1;
        }
        return lo;
    }
};