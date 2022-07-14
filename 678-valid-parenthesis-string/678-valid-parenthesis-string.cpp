class Solution {
public:
    bool checkValidString(string s) {
        int maxdiff=0,mindiff=0;
        for(auto x:s){
            maxdiff+=(x=='('||x=='*')?1:-1;
            mindiff+=(x==')'||x=='*')?-1:1;
            if(maxdiff<0){
                return false;
            }
            mindiff=max(0,mindiff);
        }
        return mindiff==0;
        
    }
};