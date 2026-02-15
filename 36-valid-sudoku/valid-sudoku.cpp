class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
    vector<vector<bool>> row(9, vector<bool>(9, false));
    vector<vector<bool>> cols(9, vector<bool>(9, false));
    vector<vector<bool>> boxes(9, vector<bool>(9, false));

     for(int i=0;i<board.size();i++)
     {
        for(int j=0;j<board[0].size();j++)
        {
              if(board[i][j]=='.') continue;
              int num=board[i][j]-'1';
              int boxI=(i/3)*3+(j/3);

              if(row[i][num] || cols[j][num] || boxes[boxI][num])
              return false;

              row[i][num] = true;
              cols[j][num] = true;
              boxes[boxI][num] = true;
        }
     } 
    
    return true;
    }
};