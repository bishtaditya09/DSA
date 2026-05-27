class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int>mp;
        unordered_map<char,int>upper; //upper ki first value
        unordered_set<int>st;
        int n=word.size();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(word[i]>='a' && word[i]<='z')
            mp[word[i]]=i;
            
            else if(upper.find(word[i])==upper.end())
            upper[word[i]]=i;
        }

        for(int i=0;i<n;i++)
        {
           if(word[i]>='A' && word[i]<='Z')
           {
             char c=tolower(word[i]);
             if(st.find(c)==st.end())
              {
                if(mp.find(c) != mp.end() && upper.find(word[i]) != upper.end())
                 {
                   if(mp[c]<upper[word[i]]){
                   cnt++;
                   st.insert(c);
                 }
               } 
            }
            }
        }
      return cnt;
    }
};