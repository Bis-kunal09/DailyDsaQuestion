class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count=0;
        for(auto x: words){
            if(x.size()<pref.size()){
                continue;
                
            }
            int n=0;
            for(int i=0;i<pref.size();i++){
                if(x[i]!=pref[i]){
                    break;
                }
                n++;
            }
            if(n==pref.size()){
                count++;
            }
            
        }
        return count;
        
    }
};