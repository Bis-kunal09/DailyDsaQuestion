class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        for(auto x:s){
            if(x==']'){
                string semi="";
                while(st.top()!='['){
                    semi=st.top()+semi;
                    st.pop();
                }
                st.pop();
                string number="";
                while(!st.empty()&&st.top()>='0'&&st.top()<='9'){
                    number=st.top()+number;
                    st.pop();
                }
                int num=stoi(number);
                string k=semi;
                while(num>1){
                    semi+=k;
                    num--;
                }
                for(auto t:semi){
                    st.push(t);
                }
            }
            else{
                st.push(x);
            }
        }
        string ans;
        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
        
    }
};