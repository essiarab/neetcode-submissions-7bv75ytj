class Solution {
public:

    void dfs(vector<vector<int>>& heights, vector<vector<bool>>& reachable, queue<pair<int, int>>& q){
        
        int n = heights.size();
        int m = heights[0].size();
        vector<pair<int, int>> directions = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}}; 

        while(!q.empty()){
            pair<int,int> curr = q.front();
            q.pop();
            for(pair<int,int> dr: directions){
                int r=curr.first+dr.first;
                int c=curr.second +dr.second;
                if((r>=0) && (r<n) &&
                    (c>=0) && (c<m) && !reachable[r][c] &&
                        heights[r][c] >= heights[curr.first][curr.second]) 
                        {
                            reachable[r][c] = true;
                            q.push({r,c});
                        }

             }
        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {

        if(size(heights)==0) return {{}};
            
        int n=size(heights);
        int m=size(heights[0]);

        // Matrices to track reachable cells from each ocean
        vector<vector<bool>> P(n, vector<bool>(m, false));
        vector<vector<bool>> A(n, vector<bool>(m, false));
        
        queue<pair<int, int>> Pq, Aq;
        
        for (int i=0;i<n;i++){
            P[i][0]=true; //first column
            A[i][m-1]=true;  //last column
            Pq.push({i,0});
            Aq.push({i,m-1});

        }
        for (int j=0;j<m;j++){
            P[0][j]=true; //first row
            A[n-1][j]=true;  //last row
            Pq.push({0,j});
            Aq.push({n-1,j});
        }
        dfs(heights, A, Aq);
        dfs(heights, P, Pq);
        
        vector<vector<int>> res;
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if(A[i][j]==P[i][j] && (A[i][j]==true)) {
                    res.push_back({i,j});
                }

            }
        }
        return res;

    }
};
