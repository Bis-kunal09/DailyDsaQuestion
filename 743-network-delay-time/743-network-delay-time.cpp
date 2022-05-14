class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int,int>> adj[n+1];
        vector<int> key(n+1,INT_MAX);
        
        for(auto x:times){
            adj[x[0]].push_back({x[1],x[2]});
            cout<<x[0]<<"+"<<x[1]<<"+"<<x[2]<<endl;
        }
        key[k]=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,k});
        
      
        while(!pq.empty()){
            
            int u=pq.top().second;
            
            pq.pop();
            
            for(auto x:adj[u]){
                int v=x.first;
                int wt=x.second;
                
                if(key[v]>key[u]+wt){
                    
                    key[v]=key[u]+wt;
                    
                    pq.push({key[v],v});
                    
                }
            }
        }
        int maxi=INT_MIN;
        for(int i=1;i<n+1;i++){
            
            maxi=max(maxi,key[i]);
        }
        if(maxi==INT_MAX){
                return -1;
            }
        return maxi;
        
    }
//     int networkDelayTime(vector<vector<int>>& times, int n, int k) {
//        vector<int> cost_arr(n+1,INT_MAX);
//        unordered_map<int,vector<pair<int,int>>> m1;
        
//        for(int i=0;i<times.size();i++){
//            int src = times[i][0];
//            int des = times[i][1];
//            int time = times[i][2];
//            m1[src].push_back({des,time});
//       }
//       cost_arr[k] = 0;  
//       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q1;
     
//       q1.push({k,0});
        
//       while(!q1.empty()){
//           pair<int,int> top = q1.top();
          
//           q1.pop();
//           int src = top.first;
//           int cost = top.second;
         
//           vector<pair<int,int>> v = m1[src];
//           for(int i=0;i<v.size();i++){
//               int node = v[i].first;
//               int total_cost = v[i].second + cost;
//               if(cost_arr[node]>total_cost){
//                  q1.push({node,total_cost}); 
//               }
//               cost_arr[node] = min(cost_arr[node],total_cost);
             
              
                  
//           }
          
//       }  
       
//       int max_ans = INT_MIN;
      
//       for(int i=1;i<cost_arr.size();i++){
        
//           max_ans = max(cost_arr[i],max_ans);
//       }
        
//       if(max_ans == INT_MAX) return -1;
        
//       return max_ans;  
        
         
        
//     }
};