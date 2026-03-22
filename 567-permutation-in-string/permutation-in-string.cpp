class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>hs1(26);
        vector<int>hs2(26);
        if(s2.size()<s1.size()) return false;
        for(int i=0;i<s1.size();i++) hs1[s1[i]-'a']++;
        for(int i=0;i<s1.size();i++) hs2[s2[i]-'a']++;

        if(hs1==hs2) return true;
        int n1=s1.size();
        int k=n1;
        int n=s2.size();

        while(k<n)
        {
            hs2[s2[k]-'a']++; //adding new element
           
            hs2[s2[k-n1]-'a']--; //removing old element
            if(hs1==hs2) return true;
            k++;
        }
        return false;
    }
};