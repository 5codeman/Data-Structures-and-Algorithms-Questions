class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int row = matrix.size();
    vector<int> output;
    int mid = (row + 1) / 2;

    int colStart = 0;
    int colEnd = matrix[0].size() - 1;
    int rowEnd = row - 1;
    
    for(int i = 0; i < mid; i++) {
        if(colEnd - colStart < 0) break; // Here is m * n matrix so here we have to stop itration beacuse this is a column mid and for a row mid it stop in first loop, means spiral only rount till row mid or column mid.

        for(int j = colStart; j <= colEnd; j++) {
            output.push_back(matrix[i][j]);
        }
        for(int j = i + 1; j <= rowEnd; j++) {
            output.push_back(matrix[j][colEnd]);
        }

        if(i == row / 2) break;

        if(colEnd == colStart) break; // Here is m * n matrix so here we have to stop itration beacuse this is a column mid and for a row mid it stop in first loop, means spiral only rount till row mid or column mid.

        for(int j = colEnd - 1; j >= colStart; j--) {
            output.push_back(matrix[rowEnd][j]);
        }
        for(int j = rowEnd - 1; j >= i + 1; j--) {
            output.push_back(matrix[j][i]);
        }

        colStart = i + 1;
        colEnd = colEnd - 1;
        rowEnd = rowEnd - 1;
    }
    return output;
    }
};