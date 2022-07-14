class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        int idx=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]<target){
                l=mid+1;
            }
            else{
                idx=mid;
                r=mid-1;
                
            }
        }
        if(idx==-1){
            return nums.size();
        }
        return idx;
        
    }
};