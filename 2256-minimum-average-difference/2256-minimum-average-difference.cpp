#include<bits/stdc++.h>
class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        if(nums.size()==1){
            return 0;
        }
        
        long long s1=0,s2=0;
        long long sum=0;
        for(auto x:nums){
            sum+=x;
        }
        int mini=INT_MAX;
        
        int ans;
        for(int i=0;i<nums.size()-1;i++){
            int count=1;
            s1+=nums[i];
            s2=sum-s1;
            int avg=0;
            
                
            avg=((s1/(i+1))-(s2/(nums.size()-i-1)));
            count++;
                
            
            avg=abs(avg);
            cout<<avg<<" ";
            
            if(avg<mini){
                mini=avg;
                ans=i;
            }
            
        }
        int a=sum/nums.size();
        
        int b=nums.size()-1;
        if(a<mini){
                
                ans=b;
        }
        
        
        return ans;
        
    }
};