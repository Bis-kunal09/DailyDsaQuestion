// class Solution {
// public:
//     int maxEnvelopes(vector<vector<int>>& envelopes) {
//         sort(envelopes.begin(),envelopes.end());
        
//         vector<int> space(envelopes.size(),1);
//         for(int j=0;j<envelopes.size();j++){
            
            
//             for(int i=j+1;i<envelopes.size();i++){
//                 if(envelopes[i][0]>envelopes[j][0]&&envelopes[i][1]>envelopes[j][1]){
//                     int a=1+space[j];
//                     space[i]=max(space[i],a);
                    
//                 }
//             }
            
//         }
//         int maxi=0;
//         for(int x:space){
//             cout<<x<<" ";
//             maxi=max(x,maxi);
//         }
//         return maxi;
        
        
//     }
// };
class Solution {
public:
    static bool compare(vector<int> &a , vector<int> &b){
        if(a[0]==b[0]) return a[1]>b[1];
        return a[0]<b[0];
    }
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        int n=envelopes.size();
        sort(envelopes.begin(),envelopes.end(),compare);
        
        vector<int> lis;
        for(int i=0;i<n;i++){
            int ht = envelopes[i][1];
            auto idx = lower_bound(lis.begin(),lis.end(),ht)-lis.begin();
            if(idx==lis.size())
                lis.push_back(ht);
            else lis[idx]=ht;
        }
        
        return lis.size();
    }
};