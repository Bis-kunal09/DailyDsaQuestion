class Solution {
public:
    int digArtifacts(int n, vector<vector<int>>& artifacts, vector<vector<int>>& dig) {
        vector<vector<int>> vis(n,vector<int>(n,0));
        for(auto x:dig){
            vis[x[0]][x[1]]=1;
        }
        int count=0;
        for(auto x:artifacts){
            bool fl=true;
            for(int i=x[0];i<=x[2];i++){
                for(int j=x[1];j<=x[3];j++){
                    if(vis[i][j]==0){
                        fl=false;
                        break;
                    }
                }
            }
            count+=fl;
        }
        return count;
    }
};