class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string str=to_string(num);
        int count=0;
        for(int i=0;i<=str.size()-k;i++){
            int a=stoi(str.substr(i,k));
            if(a==0){
                continue;
            }
            else if(num%a==0){
                cout<<a<<"->";
                count++;
            }
        }
        return count;
    }
};