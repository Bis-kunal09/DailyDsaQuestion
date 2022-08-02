class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int count=0;
        priority_queue<int,vector<int>,greater<int>> pq;
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size();j++){
                pq.push(matrix[i][j]);
                
            }
        }
        while(!pq.empty()){
            count++;
            if(count==k){
                return pq.top();
            }
            pq.pop();
        }
        return -1;
    }
};