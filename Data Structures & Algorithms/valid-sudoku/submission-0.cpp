class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n =size(board);
        vector<unordered_set<char>> rows(n);
        vector<unordered_set<char>> cols(n);
        vector<unordered_set<char>> box(n);

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='.') continue;
                int box_idx = (i / 3) * 3 + (j / 3);
                if((rows[i].count(board[i][j])) ||
                    (cols[j].count(board[i][j])) ||
                      (box[box_idx].count(board[i][j]))){
                        return false;
                      }
                else {
                    rows[i].insert(board[i][j]);
                    cols[j].insert(board[i][j]);
                    box[box_idx].insert(board[i][j]);
                }
            }
        }
        return true;
    }
};
