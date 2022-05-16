class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0]==1){
            return -1;
        }
        queue<pair<int,int>> q;
        q.push({0,0});
        vector<vector<int>> vis(grid.size(),vector<int>(grid.size(),0));
        vis[0][0]=1;
        int dx[8]={0,0,1,-1,1,1,-1,-1};
        int dy[8]={1,-1,0,0,1,-1,1,-1};
        int steps=0;
        while(!q.empty()){
            int si=q.size();
            steps++;
            for(int k=0;k<si;k++){
                int x=q.front().first;
            int y=q.front().second;
            q.pop();
            
        
            cout<<steps<<"-s-";
            if(x==grid.size()-1&&y==grid.size()-1){
                    return steps;
            }
            
            
            for(int i=0;i<8;i++){
                int tx=x+dx[i];
                int ty=y+dy[i];
                if(tx<0||tx>=grid.size()||ty<0||ty>=grid.size()||vis[tx][ty]==1||grid[tx][ty]==1){
                    continue;
                }
                vis[tx][ty]=1;
                cout<<tx<<"-x-"<<ty<<"-y-";
                q.push({tx,ty});
            }
            }
            
            
            
            
        }
        return -1;
        
        
        
        
    }
};