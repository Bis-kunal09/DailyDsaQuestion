class Solution {
public:
    
    int waysToSplitArray(vector<int>& nums) {
        long long sum=0;
        for(auto x:nums){
            sum+=x;
        
        }
        int n=nums.size();
        long long sum1=0;
        int count=0;
        for(int i=0;i<n-1;i++){
           sum1+=nums[i];
           if(sum1>=sum-nums[i]){
               cout<<sum1<<" H "<<sum-sum1<<" I ";
               count++;
           }
           sum-=nums[i]; 
        }
        return count;
    }
};