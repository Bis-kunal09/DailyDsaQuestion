class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l=0;
        int r=nums.size()-1;
        if(nums.size()==1){
            return 0;
        }
        while(l<=r){
            int mid=l+(r-l)/2;
            cout<<mid<<endl;
            if(mid>0&&mid<nums.size()-1){
                if(nums[mid]>nums[mid-1]&&nums[mid]>nums[mid+1]){
                    return mid;
                }
                else if(nums[mid]<nums[mid+1]){
                    l=mid+1;
                    
                }
                else{
                    r=mid-1;
                }
            }
            else{
                if(mid==0){
                    if(nums[mid]>nums[mid+1]){
                        return mid;
                    }
                    else{
                        return 1;
                    }
                
                }
                else if(mid==nums.size()-1){
                    if(nums[mid]>nums[mid-1]){
                        
                        return mid;
                    }
                    else{
                        return nums.size()-2;
                    }
                }
            }
        }
        return -1;
        
    }
};