class Solution {
public:
    int minimumPushes(string word) {
        vector<int>freq(26,0);
        int n=word.size();

        for(int i=0;i<n;i++)
        freq[word[i]-'a']++;
        sort(freq.rbegin(),freq.rend());

        int mini=0;
        for(int i=0;i<26;i++)
        mini+=freq[i]*((i/8)+1);

        return mini;
    }
};