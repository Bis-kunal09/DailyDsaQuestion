class Solution {
public:
    int f(int ind,int amount,vector<int> &coins,vector<vector<int>> &dp){
        if(ind==coins.size()){
            if(amount==0){
                return 0;
            }
            else{
                return 1e9;
            }
        }
        if(dp[ind][amount]!=-1){
            return dp[ind][amount];
        }
        int pick=INT_MAX;
        if(amount>=coins[ind]){
            pick=1+f(ind,amount-coins[ind],coins,dp);
            
        }
        int notpick=f(ind+1,amount,coins,dp);
        
        int a= min(pick,notpick);
        return dp[ind][amount]=a;
    }
    int coinChange(vector<int>& coins, int amount) {
        if(amount==0){
            return 0;
        }
        vector<vector<int>> dp(coins.size()+1,vector<int>(amount+1,-1));
        int res=f(0,amount,coins,dp);
        if(res==1e9){
            return -1;
        }
        return res;
        
    }
};