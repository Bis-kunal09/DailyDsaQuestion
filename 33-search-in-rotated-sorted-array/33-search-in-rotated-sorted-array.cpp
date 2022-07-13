class Solution {
public:
    int binary(vector<int> nums,int l,int r,int val){
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==val){
                return mid;
            }
            else if(nums[mid]>val){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int mid;
        int prev;
        int next;
        int l=0;
        int idx;
        int r=nums.size()-1;
        while(l<=r){
            if(nums[l]<=nums[r]){
                idx=l;
                break;
            }
            mid=l+(r-l)/2;
            prev=(mid+nums.size()-1)%nums.size();
            next=(mid+1)%nums.size();
            if(nums[mid]<=nums[prev]&&nums[mid]<=nums[next]){
                idx=mid;
                break;
                
            }
            else if(nums[mid]<nums[l]){
                r=mid-1;
            }
            else if(nums[mid]>nums[r]){
                l=mid+1;
            }
        }
        cout<<idx;
        int a=binary(nums,0,idx-1,target);
        int b=binary(nums,idx,nums.size()-1,target);
        if(a==-1&&b==-1){
            return -1;
        }
        else if(a==-1){
            return b;
        }
        else{
            return a;
        }
    }
};