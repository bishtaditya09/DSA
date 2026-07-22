class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>st;
        int n=nums.size();
        for(int i=0;i<n;i++)
        st.insert(nums[i]);

        int x,cnt=0;
        int maxi=0;
        for(auto it:st)
        {
             if(st.find(it-1)==st.end())
             {
                 x=it;
                 cnt=1;
             }
             else if(st.find(x+1)!=st.end())
             {
                cnt++;
                x=x+1;
             }
             maxi=max(maxi,cnt);
        }
       return maxi;
    }
};