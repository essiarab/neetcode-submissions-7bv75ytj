class Solution {
public:
    void bfs(vector<vector<char>>& grid,int i,int j,int n,int m) {
        queue<pair<int,int>> visit;
        grid[i][j]='0';
        visit.push({i,j});
        vector<vector<int>> directions= {{0,1},{0,-1},{1,0},{-1,0}};
                
        while(!visit.empty()){
            pair<int, int> curr = visit.front();
            visit.pop();
        
            for(auto& dir :directions){
                int dr = curr.first+dir[0];
                int dc = curr.second+dir[1];
                if((dr>=0)&&(dr<n) && (dc>=0) && (dc<m)&& (grid[dr][dc]=='1')){
                    visit.push({dr,dc});
                    grid[dr][dc]='0';
                }
            }
        }
        
    }
    int numIslands(vector<vector<char>>& grid) {
      if(size(grid)==0) return 0;
      int islands = 0;
      int n =size(grid);
      int m = size(grid[0]);
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]!='0'){
                bfs(grid,i,j,n,m);
                islands++;
            }
            
        }
      }
      return islands;
    }
};
