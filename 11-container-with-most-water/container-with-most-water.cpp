class Solution {
public:
    int maxArea(vector<int>& ht) {
      int le=0,ri=ht.size()-1;
      int maxi=0,ar;
      while(ri>le)
      {
         ar=min(ht[le],ht[ri])*(ri-le);
         maxi=max(ar,maxi);
         if(ht[le]<ht[ri])le++;
         else
         ri--;
      }
      return maxi;
    }
};