class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int j=n-1;
        int peri=0;
        while(j>=2){
            int i=j-1;
            int k=i-1;
            
          
                
                if(nums[i]+nums[k]>nums[j]){
                   
                    peri=max(peri,nums[i]+nums[j]+nums[k]);
                }
            j--;
           
            
        }
        return peri;
    }
};