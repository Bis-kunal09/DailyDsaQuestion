class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans="";
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        int i=0;
        int j=0;
        int carry=0;
        while(i<num1.size()&&j<num2.size()){
            int sum=(num1[i]-'0')+(num2[j]-'0')+carry;
            char c= sum%10+'0';
            carry=sum/10;
            ans+=c;
            i++;
            j++;
            
        }
        while(i<num1.size()){
            int sum=(num1[i]-'0')+carry;
            char c=sum%10+'0';
            carry=sum/10;
            ans+=c;
            i++;
        }
        
        while(j<num2.size()){
            int sum=(num2[j]-'0')+carry;
            char c=sum%10+'0';
            carry=sum/10;
            ans+=c;
            j++;
        }
        if(carry==1){
           ans+=to_string(carry); 
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};