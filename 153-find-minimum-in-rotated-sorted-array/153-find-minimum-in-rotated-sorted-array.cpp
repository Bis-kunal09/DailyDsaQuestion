class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int mid;
        int prev;
        int next;
        int l=0;
        int r=nums.size()-1;
        while(l<=r){
            if(nums[l]<=nums[r]){
                return nums[l];
            }
            mid=l+(r-l)/2;
            prev=(mid+n-1)%n;
            next=(mid+1)%n;
            if(nums[mid]<=nums[prev]&&nums[mid]<=nums[next]){
                return nums[mid];
            }
            else if(nums[mid]>nums[r]){
                l=mid+1;
            }
            else if(nums[mid]<nums[l]){
                r=mid-1;
            }
        }
        return -1;
        
    }
};