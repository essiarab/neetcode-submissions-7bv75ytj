class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m = size(text1);
        int n = size(text2);
       vector<vector<int>> vec(m+1, vector<int>(n+1, 0));
        
        for(int i=m-1;i>=0;i--){
             for(int j=n-1;j>=0;j--){
                if(text1[i] == text2[j]) {
                    vec[i][j]=1+vec[i+1][j+1];
                   
                }
                else {
                        vec[i][j]= max(vec[i+1][j],vec[i][j+1]);
                }
             }
        }
        return vec[0][0];
    
    }
};
