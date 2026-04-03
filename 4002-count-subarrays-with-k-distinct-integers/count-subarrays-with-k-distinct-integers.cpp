class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k, int m) {
        long long n=nums.size();
        int le=0,ri=0,uni=0,ext=0;
        unordered_map<int,int>mp;
        long long valcnt=0,cnt=0;
        //cnt for storing valid elements
        //ext-> extra element jinki freq>m
        //uni-> first occurence of an element(k distinct count karne ke liye)
        while(ri<n)
        {
           if(mp[nums[ri]]==0) uni++;
            mp[nums[ri]]++;
            if(mp[nums[ri]]==m) cnt++;
            while(mp.size()>k)
            {
                if(mp[nums[le]]==m) cnt--;
                if(mp[nums[le]]>m) ext--;
                mp[nums[le]]--;
                if(mp[nums[le]]==0)
                mp.erase(nums[le]);
                uni--;
                ext=0;
                le++;

            }
            if(mp.size()==k && cnt==k)
            {
                while(mp[nums[le]]>m){
                mp[nums[le]]--;    
                le++;
                ext++;
               }
                valcnt+=ext+1;
            }
            ri++;
        }
        return valcnt;
    }
};