class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int>freq(26,0);
        int n=text.size();
        for(auto it:text)
        freq[it-'a']++;
        int db=min(freq['l'-'a']/2,freq['o'-'a']/2);
        int si=min(freq['b'-'a'],min(freq['a'-'a'],freq['n'-'a']));
        return min(si,db);
    }
};