class Solution {
public:
    void swap(int& x,int&y){
        int tmp;
        tmp=x;
        x=y;
        y=tmp;
    }
    void rotate(vector<vector<int>>& matrix) {
        int n=size(matrix);

        for(int i=0;i<n/2;i++){
            for(int j=0;j<n;j++){
                swap(matrix[i][j],matrix[n-i-1][j]);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

    }
};
