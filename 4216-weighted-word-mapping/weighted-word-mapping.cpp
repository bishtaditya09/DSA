class Solution {
public:
    string mapWordWeights(vector<string>& wd, vector<int>& wt) {
        string ans="";
        int n=wd.size();
        for(int i=0;i<n;i++)
        {
            int sum=0,j=0;
            string temp=wd[i];
            while(j<temp.size())
            {
                sum+=wt[temp[j]-'a'];
                j++;
            }
            sum=sum%26;
            ans+=('z'-sum);
        }
        return ans;
    }
};