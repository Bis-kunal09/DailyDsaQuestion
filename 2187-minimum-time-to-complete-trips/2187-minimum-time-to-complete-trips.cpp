class Solution {
public:
    long long tripTaken(vector<int> time,long long sec){
        long long sans=0;
        for(int i=0;i<time.size();i++){
            sans+=sec/time[i];
        }
        return sans;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        
        long long low=0;
        long long high=1e14;
        long long ans=high;
        while(low<=high){
            long long mid=(low+(high-low)/2);
            if(tripTaken(time,mid)>=totalTrips){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
            
        }
        return ans;
        
        
    }
};