class Solution {
public:
    void solve(int col,vector<string>&board,vector<vector<string>>&ans,
    vector<int>leftrow,vector<int>&upperDia,vector<int>&lowerDia,int n)
    {
        if(col==n)
        {
            ans.push_back(board);
            return;
        }

        for(int row=0;row<n;row++)
        {
            if(leftrow[row]==0 && upperDia[n-1-row+col]==0 && lowerDia[row+col]==0)
            {
                 leftrow[row]=1;
                 upperDia[n-1-row+col]=1;
                 lowerDia[row+col]=1;
                 board[row][col]='Q';
                 solve(col+1,board,ans,leftrow,upperDia,lowerDia,n);
                 leftrow[row]=0;
                 upperDia[n-1-row+col]=0;
                 lowerDia[row+col]=0;
                 board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<int>leftrow(n,0),upperDia(2*n-1,0),lowerDia(2*n-1,0);
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
            board[i]=s;
        }
        solve(0,board,ans,leftrow,upperDia,lowerDia,n);
        return ans;
    }
};