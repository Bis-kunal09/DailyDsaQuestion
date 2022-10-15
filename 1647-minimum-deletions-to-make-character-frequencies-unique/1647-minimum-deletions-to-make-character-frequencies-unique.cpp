class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int> mp;
        for(auto x:s){
            mp[x]++;
        }
        unordered_set<int> st;
        int ans=0;
        for(auto x:mp){
            while(st.find(x.second)!=st.end()){
                x.second--;
                ans++;
            }
            if(x.second>0){
                st.insert(x.second);
            }
        }
        return ans;
    }
};