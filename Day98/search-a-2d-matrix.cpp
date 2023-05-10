class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int m = matrix[0].size();
            int n = matrix.size();
            if(n == 0)
                return false;
            int s = 0, e = (n*m) - 1;
            while(s<=e){
                int mid = s+(e-s)/2;
                if(matrix[mid/m][mid%m]==target){
                    return true;
                }
                else if(matrix[mid/m][mid%m]<target){
                    s = mid + 1;
                }
                else{
                    e = mid - 1;
                }
            }
        return false;
    }
};