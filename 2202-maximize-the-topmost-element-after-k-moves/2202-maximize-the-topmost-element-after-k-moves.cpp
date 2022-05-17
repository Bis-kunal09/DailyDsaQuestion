class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        int n=nums.size();
        if(k==1){
            if(n>=2){
                return nums[1];
            }
            return -1;
        }
        if(k==0){
            if(n!=0){
                return nums[0];
            }
            return -1;
        }
        if(n==1){
            if(k%2==0){
                return nums[0];
            }
            return -1;
            
        }
        int maxi=0;
        for(int i=0;i<min(k-1,n);i++){
            maxi=max(nums[i],maxi);
        }
        if(k<n){
            maxi=max(nums[k],maxi);
        }
        return maxi;
        
    }
};