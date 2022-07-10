class Solution {
public:
    int f(int n,vector<int>& cost,vector<int>& dp){
        if(n<0){
            return 0;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        
        int left=f(n-1,cost,dp);
        if(n!=cost.size()){
            left+=cost[n];
        }
        int right=f(n-2,cost,dp); 
        if(n!=cost.size()){
            right+=cost[n];
        }
        
        return dp[n]=min(left,right);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n=cost.size();
        vector<int> dp(n+1,-1);
        return f(n,cost,dp);
        
    }
};