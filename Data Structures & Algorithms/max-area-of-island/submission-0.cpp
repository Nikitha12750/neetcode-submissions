class Solution {
int dfs(int i,int j,vector<vector<bool>> &vis,vector<vector<int>>& grid,int n,int m){
    if(i<0||j<0||i>=n||j>=m||vis[i][j]||grid[i][j]==0){
        return 0;
    }
    vis[i][j]=true;
    return 1+ dfs(i-1,j,vis,grid,n,m)+
    dfs(i,j+1,vis,grid,n,m)+
    dfs(i+1,j,vis,grid,n,m)+
    dfs(i,j-1,vis,grid,n,m);
}
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int area=0;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1&&!vis[i][j]){
                    area=max(area,dfs(i,j,vis,grid,n,m));
                }
            }
        }
        return area;
    }
};
