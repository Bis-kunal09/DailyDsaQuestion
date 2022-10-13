class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum1=0;
        int sum2=0;
        for(int i=0;i<gas.size();i++){
            sum1+=gas[i];
            sum2+=cost[i];
        }
        if(sum1<sum2){
            return -1;
        }
        
        
        int curr_fuel=0,start=0;  // start with zero fuel.
        for(int i=0;i<gas.size();i++)
        {
            
            if(curr_fuel<0)
            {
                start=i;
                curr_fuel=0;
            }
           
            curr_fuel+=(gas[i]-cost[i]);
        }
        return start;
       
        
    }
};