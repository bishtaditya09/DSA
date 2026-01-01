class Solution {
public:
    vector<int> plusOne(vector<int>& dig) {
        int n=dig.size();
        int cr=1;
        for(int i=n-1;i>=0;i--)
        {
               int sum=dig[i]+cr;
               dig[i]=sum%10;
               cr=sum/10;
        }
        if(cr)
        {
            dig.insert(dig.begin(),1);
        }
        return dig;
    }
};