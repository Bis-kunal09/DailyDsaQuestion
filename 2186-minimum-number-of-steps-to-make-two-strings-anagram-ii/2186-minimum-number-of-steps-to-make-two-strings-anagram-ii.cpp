class Solution {
public:
    int minSteps(string s, string t) {
        int a[26]={0};
        int b[26]={0};
        int c[26]={0};
        for(int i=0;i<s.size();i++){
            a[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++){
            b[t[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(a[i]>b[i]){
                c[i]=a[i]-b[i];
                cout<<a[i]<<"-"<<b[i]<<"="<<c[i]<<endl;
            }
            else{
                c[i]=b[i]-a[i];
                cout<<b[i]<<"-"<<a[i]<<"="<<c[i]<<endl;
            }
        }
        int ans=0;
        for(int i=0;i<26;i++){
            ans+=c[i];
        }
        return ans;
        
        
        
    }
};