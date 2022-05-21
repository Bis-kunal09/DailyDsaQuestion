class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        map<string,int> st;
        for(auto x:words){
            st[x]++;
        }
        for(auto x:st){
            cout<<x.first<<" "<<x.second<<" ";
        }
        
        int count=0;
        for(int i=0;i<s.size();i++){
            string a=s.substr(0,i+1);
            cout<<a<<endl;
            if(st.find(a)!=st.end()){
                
                count+=st[a];
                
            }
        }
        return count;
        
    }
};