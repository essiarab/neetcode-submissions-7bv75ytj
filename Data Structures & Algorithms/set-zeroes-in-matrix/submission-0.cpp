class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        // Initialize vectors with size and default value (false/0)
        // This replaces reserve(), which doesn't actually create the elements
        std::vector<bool> zerorow(rows, false);
        std::vector<bool> zerocol(cols, false);
        for(int i=0;i<rows;i++){
            for (int j=0;j<cols;j++){
                if(matrix[i][j]==0){
                    zerorow[i]=true;
                    zerocol[j]=true;
                }
            }
        }
        for(int i=0;i<rows;i++){
            for (int j=0;j<cols;j++){
                if(zerorow[i] || zerocol[j]) {
                    matrix[i][j]=0;
                }; 
             }
        }     
    }
};
