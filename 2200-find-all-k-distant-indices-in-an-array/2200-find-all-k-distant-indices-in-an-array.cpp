class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> fans;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==key){
                ans.push_back(i);
            }
        }
        for(int i=0;i<nums.size();i++){
            for(auto j:ans){
                if(abs(i-j)<=k){
                    fans.push_back(i);
                    break;
                }
            }
        }
        return fans;
        
        
    }
};