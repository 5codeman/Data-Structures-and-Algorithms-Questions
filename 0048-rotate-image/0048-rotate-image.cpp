/* Complexity TC = [O((n^2-n)/2 + (n * n/2))], SC = [O(1)] */
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // First Transpose the matrix (means element of ith row and jth col is swaped with element of jth row and ith col, simpley matrix[i][j] swap with matrix[j][i])
        int row = matrix.size();
        int col = matrix[0].size();
        for(int i = 0; i < row - 1; i++) {
            for(int j = i + 1; j < col; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        // Now we reverse the each row
        for(int i = 0; i < row; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};