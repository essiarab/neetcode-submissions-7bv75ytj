class Solution {
public:
    int uniquePaths(int m, int n) {
        
        std::vector<std::vector<int>> v(m, std::vector<int>(n, 0));
        for(int i =m-1;i>=0;i--) {
            v[i][n-1]=1;
        }
        for(int j =n-1;j>=0;j--) {
            v[m-1][j]=1;
        }
        for(int i =m-2;i>=0;i--) {
            for(int j =n-2;j>=0;j--) {
             v[i][j]= v[i+1][j]+v[i][j+1];
            }
        }
        return v[0][0];
    }
};
