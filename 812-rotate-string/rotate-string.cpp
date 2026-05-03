class Solution {
public:
    bool rotateString(string s, string goal) {
        string ans=goal+goal;
        int cnt=0;
        int i=0,j=0;
        if(s.size()!=goal.size()) return false;
        while(i<s.size() && j<ans.size())
        {
            if(s[i]!=ans[j])
            {
                j=j-i+1;
                i=0;
            }
            else
            {
                cnt++;
                i++;
                j++;
                if(i==s.size()) return true;
            }
        }
        return false;
    }
};