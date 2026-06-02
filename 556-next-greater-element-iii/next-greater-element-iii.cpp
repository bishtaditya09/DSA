class Solution {
public:
    int nextGreaterElement(int n) {
      string s=to_string(n);
      int i=s.size()-2;
      while(i>=0 && s[i]>=s[i+1])
      i--;

      if(i<0) return -1;

      for(int j=s.size()-1;j>i;j--)
      {
        if(s[j]>s[i])
        {
            swap(s[i],s[j]);
            break;
        }
      }
      reverse(s.begin()+i+1,s.end());
      long long ans=stoll(s);
      return ans>INT_MAX?-1:ans;
    }
};