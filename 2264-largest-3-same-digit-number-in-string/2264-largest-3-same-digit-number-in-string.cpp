class Solution {
public:
    string largestGoodInteger(string num) {
        string maxi="";
        bool flag=true;
        for(int i=0;i<=num.size()-3;i++){
            string s=num.substr(i,3);
            for(auto x:s){
                    cout<<x<<" ";
                }
                cout<<endl;
            for(int k=1;k<3;k++){
                if(s[k]!=s[k-1]){
                    flag=false;
                    
                cout<<endl;
                    
                }
            }
            if(flag){
                for(auto x:s){
                    cout<<x<<" ";
                }
                cout<<endl;
                if(maxi.size()==0){
                    maxi=s;
                }
                else{
                    if(maxi[0]<s[0]){
                        maxi=s;
                    }
                }
            }
            flag=true;
            
        }
        return maxi;
        
    }
};