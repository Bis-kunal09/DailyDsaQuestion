class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        map<char,string> m;
        vector<string> code={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        for(char i='a';i<='z';i++){
            m[i]=code[i-'a'];
        }
        vector<string> ans;
        for(auto x:words){
            string s="";
            for(auto i:x){
                s+=m[i];
            }
            ans.push_back(s);
        }
        int fans=1;
        sort(ans.begin(),ans.end());
        for(int i=1;i<ans.size();i++){
            if(ans[i]!=ans[i-1]){
                fans++;
            }
        }
        return fans;
        
    }
};