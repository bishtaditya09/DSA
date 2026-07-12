class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>ans=arr;
        int n=arr.size();
        unordered_map<int,int>mp;
        sort(ans.begin(),ans.end());
        int pri=1;
        for(int i=0;i<n;i++)
        {
            if(mp.find(ans[i])==mp.end())
                mp[ans[i]]=pri++;
        }
        for(int i=0;i<n;i++)
        arr[i]=mp[arr[i]];
        return arr;
    }
};