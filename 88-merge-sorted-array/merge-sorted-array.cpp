class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int le=m-1;
        int ri=0;
        while(le>=0 && ri<n)
        {
            if(nums1[le]>nums2[ri])
            {
                swap(nums1[le],nums2[ri]);
                le--;
                ri++;
            }
            else          //since arrays iss index se toh sorted hi h na no more further scanning
            break;
        }
        sort(nums1.begin(),nums1.begin()+m);
        sort(nums2.begin(),nums2.end());
        for(int i=0;i<n;i++)
        {
            nums1[i+m]=nums2[i];
        } 
    }
};