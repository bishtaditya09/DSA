class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0,el;
        int n=nums.size();
        for(int i=0;i<n;i++) 
        {
            if(!cnt)
            {
                cnt=1;
                el=nums[i];
            }
            else if(nums[i]==el)
            cnt++;
            else
            cnt--;
        }
        cnt=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==el) cnt++;
        }
        return el;
    }
};