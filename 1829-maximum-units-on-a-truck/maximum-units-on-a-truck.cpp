class Solution {
public:
   static bool comp(vector<int>&a,vector<int>&b)
    {
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& box, int truck) {
     sort(box.begin(),box.end(),comp);

     int maxi=0;
     for(int i=0;i<box.size();i++)
     {
         if(truck>=box[i][0])
         {
            maxi+=box[i][1]*box[i][0];
            truck-=box[i][0];
         }
         else
         {
            maxi+=truck*box[i][1];
            break;
         }
     }
     return maxi;
    }
};