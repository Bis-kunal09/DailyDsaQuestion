class Solution {
public:
    int f(int i,int j,int r,int c,vector<vector<int>> &obstacleGrid,vector<vector<int>> &dp){
        if(i<0||i>=r||j<0||j>=c||obstacleGrid[i][j]==1){
            return 0;
        }
        
        if(i==r-1&&j==c-1){
            return 1;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int left=f(i,j+1,r,c,obstacleGrid,dp);
        int right=f(i+1,j,r,c,obstacleGrid,dp);
        int ans=dp[i][j]= left+right;
        return ans;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
     
        int r=obstacleGrid.size();
        int c=obstacleGrid[0].size();
        vector<vector<int>> dp(r,vector<int>(c,-1));
        int ans=f(0,0,r,c,obstacleGrid,dp);
        return ans;
    }
};