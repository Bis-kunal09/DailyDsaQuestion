// class Solution {
// public:
//     vector<vector<int>> findWinners(vector<vector<int>>& matches) {
//         map<int,int> mp;
//         vector<vector<int>> ans;
//         for(auto x:matches){
//             mp[x[1]]++;
//         }
//         vector<int> a;
//         vector<int> b;
//         for(auto x:matches){
           
//             if(mp.find(x[0])==mp.end()){
//                 mp[x[0]]=-1;
//                 a.push_back(x[0]);
//             }
//         }
//         for(auto  x:mp){
//             cout<<x.second<<"+"<<endl;
//             if(x.second==1){
//                 b.push_back(x.first);
//             }
//         }
        
//         ans.push_back(a);
//         ans.push_back(b);
//         return ans;
        
//     }
// };
class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,pair<int,int>> ump;
        for(int i=0;i<matches.size();i++){
            ump[matches[i][0]].first++;
            ump[matches[i][1]].second++;
        }
        vector<vector<int>> res;
        vector<int> win,los;
        for(auto i:ump){
            if(i.second.second==0){
                win.push_back(i.first);
            }
            else if(i.second.second==1){
                los.push_back(i.first);
            }
        }
        res.push_back(win);
        res.push_back(los);
        return res;
    }
};