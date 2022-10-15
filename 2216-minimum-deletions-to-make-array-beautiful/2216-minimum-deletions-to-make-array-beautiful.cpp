class Solution {
public:
    int minDeletion(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        int count=0;
        int del=0;
        int p=0;
        for(int i=1;i<nums.size();i++){
            if(count%2==0&&nums[p]==nums[i]){
                del++;
                continue;
            }
            else{
                count++;
                p=i;
            }
        }
        if((count+1)%2!=0){
            del++;
        }
        return del;
    }
};