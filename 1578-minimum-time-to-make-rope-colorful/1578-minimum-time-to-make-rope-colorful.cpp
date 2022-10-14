class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int temp=0;
        int sum=0;
        for(int i=1;i<colors.size();i++){
            if(colors[temp]==colors[i]){
                if(neededTime[temp]>neededTime[i]){
                    sum+=neededTime[i];
                }
                else{
                    sum+=neededTime[temp];
                    temp=i;
                }
                
            }
            else{
                temp=i;
            }
        }
        return sum;
        
    }
};