class Solution {
public:
      bool canReach(vector<int>& A, int i) {
        return 0 <= i && i < A.size() && A[i] >= 0 && (!(A[i] = -A[i]) || canReach(A, i + A[i]) || canReach(A, i - A[i]));
    }
};
// class Solution {
// public:
    
//     bool ff(vector<int>& arr, vector<bool>& visited, int i) {
//         if (i < 0 || i >= arr.size() || visited[i]) return false;
//         if (arr[i] == 0) return true;
//         visited[i] = true;
//         return ff(arr, visited, i + arr[i]) || ff(arr, visited, i - arr[i]);
//     }
    
//     bool canReach(vector<int>& arr, int start) {
//         vector<bool> visited(arr.size(), false);
//         return ff(arr, visited, start);
//     }
// };
