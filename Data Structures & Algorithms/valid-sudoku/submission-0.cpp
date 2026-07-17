class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // row duplicate check
        set<int>rowCheck;
        for(int i=0;i<9;i++)
        {
            rowCheck.clear();
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.') continue;
                if(rowCheck.count(board[i][j])) return false;
                else rowCheck.insert(board[i][j]);
            }  
        }
        
        // column duplicate check
        set<int>colCheck;
        for(int i=0;i<9;i++)
        {
            colCheck.clear();
            for(int j=0;j<9;j++)
            {
                if(board[j][i]=='.') continue;
                if(colCheck.count(board[j][i])) return false;
                else colCheck.insert(board[j][i]);
            }
        }
        // box duplicate check
        map<int, set<int>>boxCheck;
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.') continue;
                int box = i/3 * 3 + j/3;
                if(boxCheck[box].count(board[i][j])) return false;
                else boxCheck[box].insert(board[i][j]);
            }
        }
        return true;
    }
};