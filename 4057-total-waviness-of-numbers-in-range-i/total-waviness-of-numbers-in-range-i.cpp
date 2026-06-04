class Solution {
public:
    int iswavi(int n)
    {
        string s=to_string(n);
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(i==0 || i==s.size()-1)
            continue;
            else
            {
                if((s[i]>s[i+1] && s[i]>s[i-1]) || (s[i]<s[i+1] && s[i]<s[i-1]))
                cnt++;
            }
        }
        return cnt;
    }
    int totalWaviness(int num1, int num2) {
        int cnt=0;
        for(int i=num1;i<=num2;i++)
        {
            cnt+=iswavi(i);
        }
        return cnt;
    }
};