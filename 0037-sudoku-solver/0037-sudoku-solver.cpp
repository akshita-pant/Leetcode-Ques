class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) 
    { solve(board); }
    bool solve(vector<vector<char>>& board) {
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (board[i][j] == '.') {
                    for (char c = '1'; c <= '9'; c++) {
                        if (isSafe(board, i, j, c)) {
                            board[i][j] = c;
                            if (solve(board) == true)
                                return true;
                            else
                                board[i][j] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }

    bool isSafe(vector<vector<char>>& board , int row, int col, char c)
    {
        for(int i=0; i<9; i++)
        {
            if(board[row][i]==c) //col
            return false;
            if(board[i][col]==c) //row
            return false;
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==c) //3X3
            return false;
        }
        return true;
    }
};