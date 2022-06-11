class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int total=0;
        for(auto x:nums){
            total+=x;
            
        }
        int target=total-x;
        if(target==0){
            return nums.size();
        }
        if(target<0){
            return -1;
        }
        int i=0;
        int j=0;
        int ans=0;
        int mini=-1;
        while(j<nums.size()){
            ans+=nums[j];
            if(ans<target){
                j++;
            }
            else if(ans==target){
                mini=max(mini,j-i+1);
                j++;
            }
            else if(ans>target){
                while(ans>target){
                    ans-=nums[i];
                    i++;
                }
                if(ans==target){
                    mini=max(mini,j-i+1);
                }
                j++;
            }
        }
        if(mini==-1){
            return -1;
        }
        return nums.size()-mini;
    }
};