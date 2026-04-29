class Solution {
public:

    bool BT(vector<vector<char>>& board, int i,int j,string word, int index){
        if(board.empty()) return false;
        int m=size(board);
        int n=size(board[0]);
        if(index==word.length()) {
            return true;
        }
        if(i>=m || i<0) return false;
        if(j>=n || j<0) return false;
        if(board[i][j] != word[index]) {
             return false;
        }
        else{
            char temp = board[i][j];
            board[i][j] = '#'; 
            bool found = ((BT(board,i+1,j,word,index+1)) ||
                (BT(board,i-1,j,word,index+1)) ||
                (BT(board,i,j-1,word,index+1)) ||
                (BT(board,i,j+1,word,index+1)));
            board[i][j] = temp;
            return found;
        }
        
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=size(board);
        int n=size(board[0]);
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++){
                if(BT(board, i,j,word,0)) return true;
            }
        }
        return false;
        
    }
};
