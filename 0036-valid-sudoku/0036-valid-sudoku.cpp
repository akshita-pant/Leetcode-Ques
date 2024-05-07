class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++)
        {
            for(int j=0; j<9; j++)
            {
               if(board[i][j]!='.')
               {
                char c= board[i][j];
                board[i][j]='.'; //temporarily removing for validating filled cells only
                if(!isSafe(board, i,j,c))
                return false;
                board[i][j]=c;
               } 
            }
        }
        return true;
    }
    bool isSafe(vector<vector<char>>&board , int row, int col, char c)
    {
        for (int i=0; i<9; i++)
        {
            if(board[i][col]==c) return false;

            if(board[row][i]==c)return false;

            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==c)return false;
        }
        return true;
    }
};