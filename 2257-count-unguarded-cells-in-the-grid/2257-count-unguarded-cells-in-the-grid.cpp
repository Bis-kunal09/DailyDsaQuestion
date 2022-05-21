// class Solution {
// public:
//     void cover(int i,int j,int r,int c,vector<vector<int>> &mp){
//         mp[i][j]=-1;
//         for(int k=i+1;k<r;k++){
//             if(k<0||k>=r){
//                 break;
//             }
//             if(mp[k][j]==-1){
//                 break;
//             }
//             else{
//                 mp[k][j]=1;
//             }
//         }
//         for(int k=i-1;k>=0;k--){
//             if(k<0||k>=r){
//                 break;
//             }
//             if(mp[k][j]==-1){
//                 break;
//             }
//             else{
//                 mp[k][j]=1;
//             }
//         }
//         for(int k=j+1;k<c;k++){
//             if(k<0||k>=c){
//                 break;
//             }
//             if(mp[i][k]==-1){
//                 break;
//             }
//             else{
//                 mp[i][k]=1;
//             }
//         }
//         for(int k=j-1;k>=0;k--){
//             if(k<0||k>=c){
//                 break;
//             }
//             if(mp[i][k]==-1){
//                 break;
//             }
//             else{
//                 mp[i][k]=1;
//             }
//         }
        
//     }
//     int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        
        
//         vector<vector<int>> mp(m,vector<int>(n,0));
//         for(auto x:walls){
//             mp[x[0]][x[1]]=-1;
//         }
//         for(auto x:guards){
            
//             cover(x[0],x[1],m,n,mp);
//         }
//         int count=0;
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 if(mp[i][j]==0){
//                     cout<<i<<" "<<j<<" "<<endl;
//                     count++;
//                 }
//             }
//         }
//         return count;
        
        
//     }
// };
class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<char>> g(m,vector<char>(n,'0'));
        
        //fill the position of guards.
        for(int i=0;i<guards.size();i++){
            int x=guards[i][0],y=guards[i][1];
            g[x][y]='g';
        }
        
        //fill the position of walls
        for(int i=0;i<walls.size();i++){
            int x=walls[i][0],y=walls[i][1];
            g[x][y]='w';
        }
        
        for(int i=0;i<guards.size();i++){
            int x=guards[i][0],y=guards[i][1];
            
            //check for guards or walls in upper direction.
            for(int j=x-1;j>=0;j--){
                if(g[j][y]=='g' or g[j][y]=='w'){
                    break;
                }
                g[j][y] = '1'; //fill the cell as guarded
            }
            
            //check for guards or walls in right direction.
            for(int j=y+1;j<n;j++){
                if(g[x][j]=='g' or g[x][j]=='w'){
                    break;
                }
                g[x][j] = '1';
            }
            
            //check for guards or walls in downward direction.
            for(int j=x+1;j<m;j++){
                if(g[j][y]=='g' or g[j][y]=='w'){
                    break;
                }
                g[j][y] = '1';
            }
            
            //check for guards or walls in left direction.
            for(int j=y-1;j>=0;j--){
                if(g[x][j]=='g' or g[x][j]=='w'){
                    break;
                }
                g[x][j] = '1';
            }
        }
        
        int res=0;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                //if g[i][j] is '0' it means the cell is not guarded.
                if(g[i][j]=='0'){
                    res++;
                }
            }
        }
        return res;
    }
};