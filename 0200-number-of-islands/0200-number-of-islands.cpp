class Solution {
public:
    vector<vector<int>> directions = {{0,1},{0,-1},{1,0},{-1,0}};

    void bfs(vector<vector<char>>& grid,int i,int j){
        queue<vector<int>> q;
        q.push({i,j});

        while(!q.empty()){
            vector<int> p= q.front();
            q.pop();
            int r=p[0];
            int c=p[1];

            for(int i=0 ; i<4 ; i++){
                int nr =r + directions[i][0];
                int nc =c + directions[i][1];
                if(nc<grid[0].size() && nr < grid.size() && nr>=0 && nc>=0 && grid[nr][nc]=='1'){
                    q.push({nr, nc});
                    grid[nr][nc]='0';
                }
            }
        }
    }


    int numIslands(vector<vector<char>>& grid) {
        if(grid.size()==0){
            return 0;
        }

        int r=grid.size();
        int c=grid[0].size();
        int islands=0;

        for(int i=0 ; i<r ; i++){
            for(int j=0 ; j<c ; j++){
                if(grid[i][j]=='1'){
                    bfs(grid,i,j);
                    islands+=1;
                }
            }
        }
        return islands;


        
    }
};