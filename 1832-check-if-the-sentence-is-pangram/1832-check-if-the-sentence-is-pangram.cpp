class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int> mp;
        for(auto x:sentence){
            if(x>=97&&x<=122){
                mp[x]++;
            }
        }
        if(mp.size()==26){
            return true;
        }
        return false;
        
    }
};