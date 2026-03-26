class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int ind, int val) {
        set<int>st;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int x=nums[i];
            auto it=st.lower_bound(x-val);   //koi value jo x se thodi badi ho bss

            if(it!=st.end() && *it<=(x+val)) return true;

            st.insert(x);

            if(i>=ind) st.erase(nums[i-ind]); //yeah window maintain karega
        }
        return false;
    }
};