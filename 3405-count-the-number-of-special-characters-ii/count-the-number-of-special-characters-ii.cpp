class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>low(26,-1);
        vector<int>hi(26,-1);
        int n=word.size();

        for(int i=0;i<n;i++)
        {
            if(word[i]>='a' && word[i]<='z')
            low[word[i]-'a']=i;

            else
            {
                int indx=word[i]-'A';
                if(hi[indx]==-1)
                hi[indx]=i;
            }
        }
        int cnt=0;
        for(int i=0;i<26;i++)
        {
             if(hi[i]!=-1 && low[i]!=-1 && low[i]<hi[i])
             cnt++;
        }
        return cnt;
    }
};