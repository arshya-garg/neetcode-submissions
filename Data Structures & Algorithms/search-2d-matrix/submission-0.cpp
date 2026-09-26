class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int row = 0;
        for(int i=0;i<n;i++){
            if(matrix[i][0]<=target)
                row = i;
        }
        for(int j=0;j<m;j++){
            if(matrix[row][j]==target){
                return true;
            }
        }
        return false;
        
    }
};
