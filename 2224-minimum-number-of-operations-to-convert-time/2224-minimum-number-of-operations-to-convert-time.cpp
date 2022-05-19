class Solution {
public:
    int convertTime(string current, string correct) {
        
        int curr = 0;
        int corr = 0;
        
        curr = std::stoi(current.substr(0,2))*60 +                        std::stoi(current.substr(3));
        corr = std::stoi(correct.substr(0,2))*60 +  std::stoi(correct.substr(3));
        int count=0;
        while(true){
            if(curr==corr){
                break;
            }
            if(curr+60<=corr){
                curr+=60;
            }
            else if(curr+15<=corr){
                curr+=15;
            }
            else if(curr+5<=corr){
                curr+=5;
            }
            else{
                curr+=1;
            }
            count++;
            cout<<curr<<"+"<<count<<"*";
        }
        return count;
        
        
        
        
    }
};