class Solution {
public:
    string generate(string &word)
    {
        vector<int>freq(26,0);
        int n=word.size();
        for(int i=0;i<n;i++)
        freq[word[i]-'a']++;

        string new_word="";
        for(int i=0;i<26;i++)
        {
            if(freq[i]>0)
            new_word+=string(freq[i],i+'a');
        }
      return new_word;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;
        for(int i=0;i<strs.size();i++)
        {
            string wor=strs[i];
            string new_word=generate(wor);
            mp[new_word].push_back(wor);
        }

        for(auto it:mp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};