class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0;
        int j=matrix[0].size()-1;
        if(matrix.size()==0){
            return false;
        }
        while(i<matrix.size()&&j>=0){
            if(matrix[i][j]==target){
                return true;
            }
            else if(matrix[i][j]<target){
                i++;
            }
            else{
                j--;
            }
        }
        return false;
        
    }
};