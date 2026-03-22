class Solution {
public:
    void rotate(vector<vector<int>>&mat)
    {
        int n=mat[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(j>i)
                swap(mat[i][j],mat[j][i]);
            }
            reverse(mat[i].begin(),mat[i].end());
        }
    }
    bool isEqual(vector<vector<int>>&mat,vector<vector<int>>&target)
    {
        int n=mat[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
               if(mat[i][j]!=target[i][j]) return false;        
            }
        
        }
        return true;
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
     for(int i=0;i<4;i++)
     {
        if(isEqual(mat,target)) return true;
        rotate(mat);
     }
     return false;
    }
};