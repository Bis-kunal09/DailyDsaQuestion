class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> ans;
        for(char i=s[0];i<=s[3];i++){
            for(char j=s[1];j<=s[4];j++){
                string p="";
                p+=i;
                p+=j;
                cout<<p;
                ans.push_back(p);
            }
        }
        return ans;
        
    }
};