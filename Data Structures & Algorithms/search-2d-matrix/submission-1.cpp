class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n = mat.size();
        int m = mat[0].size();

        int stRow = 0;
        int endRow = n-1;

        while(stRow <= endRow){
            int midRow = stRow + (endRow-stRow)/2;
            if(target >= mat[midRow][0] && target <= mat[midRow][m-1]){
                int st = 0;
                int end = m-1;
                while(st <= end){ 
                    int mid = st + (end-st)/2;
                    if(mat[midRow][mid] == target) return true;
                    if(mat[midRow][mid] < target){
                        st = mid+1;
                    }
                    else end = mid-1;
                }
                
            }
            if(target > mat[midRow][0]){
                stRow = midRow+1;
            }
            else endRow = midRow-1;
        }

        return false;

        
        
    }
};
