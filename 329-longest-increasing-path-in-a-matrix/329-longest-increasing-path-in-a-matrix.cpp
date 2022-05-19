class Solution {
public:
    int f(int i,int j,int prev,int r,int c,vector<vector<int>> &vis,vector<vector<int>> & matrix,vector<vector<int>> &dp){
        if(i<0||i>=r||j<0||j>=c||vis[i][j]==1||matrix[i][j]<=prev){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        vis[i][j]=1;
        int a=1+f(i+1,j,matrix[i][j],r,c,vis,matrix,dp);
        int b=1+f(i-1,j,matrix[i][j],r,c,vis,matrix,dp);
        int e=1+f(i,j+1,matrix[i][j],r,c,vis,matrix,dp);
        int d=1+f(i,j-1,matrix[i][j],r,c,vis,matrix,dp);
        cout<<a<<" "<<b<<" "<<e<<" "<<d<<endl;
        vis[i][j]=0;
        int best=max(a,max(b,max(e,d)));
        return dp[i][j]=best;
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        
        int r=matrix.size();
        int c=matrix[0].size();
        vector<vector<int>> dp(r,vector<int>(c,-1));
        vector<vector<int>> vis(r,vector<int>(c,0));
        int maxi=1;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                
                cout<<"CALL"<<i<<endl;
                int smaxi=f(i,j,INT_MIN,r,c,vis,matrix,dp);
                cout<<"SMAX"<<smaxi<<endl;
                maxi=max(smaxi,maxi);
            }
        }
        
        return maxi;
        
        
    }
};
