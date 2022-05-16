class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = unique(nums.begin(), nums.end()) - nums.begin();  //remove duplicates
       
        int lo=0, hi=n;   // find the kth missing number
        while(lo<hi) {
            int m = lo+(hi-lo)/2;
            if (nums[m]-m-1<k) 
                lo = m+1;
            else hi =m;
        }
        
        if (lo==0) return (long long)k*(k+1) >>1; 

        k += lo; //the value of k-th missing number;
        long long sum = (long long)k*(k+1)>>1;  // sum of 1.. k.
        sum -= accumulate(nums.begin(), nums.begin()+lo, (long long) 0);
        
        return sum;
    }
};