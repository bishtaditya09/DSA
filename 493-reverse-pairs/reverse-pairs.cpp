class Solution {
public:
    void merge(vector<int>&arr,int lo,int mid,int hi)
    {
    vector<int>temp;
    int le=lo;
    int ri=mid+1;
    while(le<=mid && ri<=hi)
    {
        if(arr[ri]<arr[le])
        {
            temp.push_back(arr[ri]);
            ri++;
        }
        else
        {
            temp.push_back(arr[le]);
            le++;
        }
    }
    while(le<=mid)
    {
        temp.push_back(arr[le]); 
        le++;
    }
    while(ri<=hi)
    {
        temp.push_back(arr[ri]);
        ri++;
    }
    for(int i=lo;i<=hi;i++)
    {
        arr[i]=temp[i-lo];
    }
}
int mergesort(vector<int>&arr,int lo,int hi)
{
    int cnt=0;
    if(lo>=hi) return 0;
    int mid=(lo+hi)/2;
    cnt+=mergesort(arr,lo,mid);
    cnt+=mergesort(arr,mid+1,hi);
     
    int ri=mid+1;
    for(int i=lo;i<=mid;i++){
    while( ri<=hi && arr[i]>2ll*arr[ri]) ri++;
    cnt+=ri-(mid+1);
    }
    merge(arr,lo,mid,hi);
    return cnt;
}
    int reversePairs(vector<int>&arr) {
        return mergesort(arr,0,arr.size()-1);
    }
};