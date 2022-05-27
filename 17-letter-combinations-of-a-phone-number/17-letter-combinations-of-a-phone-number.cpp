class Solution {
public:
    void f(string digits,string ans,int idx,string mapping[],vector<string> &fans){
        if(idx>=digits.size()){
            fans.push_back(ans);
            return;
        }
        int num=digits[idx]-'0';
        string mapa=mapping[num];
        for(int i=0;i<mapa.size();i++){
            ans.push_back(mapa[i]);
            f(digits,ans,idx+1,mapping,fans);
            ans.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        string ans="";
        vector<string> fans;
        if(digits.size()==0){
            return fans;
        }
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        f(digits,ans,0,mapping,fans);
        return fans;
        
    }
};