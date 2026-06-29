class Solution {
public:
    int numOfStrings(vector<string>& pat, string word) {
        int n=pat.size(),cnt=0;
        for(int i=0;i<n;i++)
        {
            string tp=pat[i];
            int pos=word.find(tp);
            if(pos!=string::npos)
            cnt++;
        } 
        return cnt;
    }
};