class Solution {
public:
   
           string repeatLimitedString(string s, int repeatLimit) {
        unordered_map<char, int> mp;
        priority_queue<pair<char, int>> pq;
        
        for(auto x:s) mp[x]++;      //Make a frequency map of each character
        string ans = "";
        
        for(auto x:mp)          //Insert all the character with count in a max heap
        {
            pq.push(x);
        }
        
        while(!pq.empty())
        {
            auto ch = pq.top().first;
            auto cnt = pq.top().second;
            pq.pop();
            
            int c = 0;      //count of character in the answer
            
            while(c < cnt && c < repeatLimit)       //Add the top most char of max heap to the answer
            {                                       //until the c > count of char or upto limit
                ans += ch;
                c++;
            }
            cnt -= c;       //reduce the count of character
            
            if(cnt > 0 && !pq.empty()){        //if count is still greater than 0 and pq in not empty then
                
                auto ch1 = pq.top().first;
                auto cnt1 = pq.top().second;
                pq.pop();
                
                ans += ch1;             //insert next character on top of hean in ans only 1 time
                cnt1--;
                pq.push({ch, cnt});
                if(cnt1 > 0)pq.push({ch1, cnt1});
            }
        }
        
        return ans;
    }
//         int cnt[26]={0};
//         for(auto it:s){
//             cnt[it-'a']++;
//         }
//         for(int i=0;i<26;i++){
//             cout<<cnt[i];
//         }
//         priority_queue<pair<int,int>> pq;
//         for(int i=0;i<26;i++){
//             pq.push({i,cnt[i]});
//         }
//         string ans="";
//         while(!pq.empty()){
//             int c1=pq.top().first;
//             int f1=pq.top().second;
//             pq.pop();
//             if(ans.size()==0||ans.back()!=(char)(c1+'a')){
//                 int times=min(f1,repeatLimit);
//                 for(int j=0;j<times;j++){
//                     ans+=(char)(c1+'a');
//                 }
//                 f1-=times;
//                 if(f1){
//                     pq.push({c1,f1});
//                 }
//             }
//             else{
//                 if(pq.size()==0){
//                     break;
//                 }
//                 int c2=pq.top().first;
//                 int f2=pq.top().second;
//                 pq.pop();
//                 ans+=(char)(c2+'a');
//                 f2--;
//                 if(f2){
//                     pq.push({c2,f2});
//                 }
//                 pq.push({c1,f1});
//             }
//         }
//         return ans;
        
        
//     }
};