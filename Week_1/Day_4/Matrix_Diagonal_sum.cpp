class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int length = mat.size();
        int sum = 0;
        for (int i = 0; i < length; i++) {
            sum += mat[i][i];          
            sum += mat[length-i-1][i]; 
            if (length%2== 1 && i== length/2) 
                sum -= mat[i][i];
        }
        return sum;
    }
};
