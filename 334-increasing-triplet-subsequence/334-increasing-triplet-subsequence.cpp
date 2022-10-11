class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size()<3){
            return false;
        }
        int min1=INT_MAX;
        int min2=INT_MAX;
        for(auto x:nums){
            if(x<=min1){
                min1=x;
            }
            else if(x<=min2){
                min2=x;
            }
            else{
                return true;
            }
        }
        return false;
            
        
        
    }
};