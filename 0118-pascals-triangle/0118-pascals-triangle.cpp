/* Complexity TC = [O(n^2)], SC = [O(n)] */
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>pascal;
        vector<int>level;
        level.push_back(1);
        pascal.push_back(level);
        for(int i = 1; i < numRows; i++) {
            vector<int>level;
            level.push_back(1);
            for(int j = 0; j < i - 1; j++) {
                int temp = pascal[i - 1][j] + pascal[i - 1][j + 1];
                level.push_back(temp);
            }
            level.push_back(1);
            pascal.push_back(level);
        }
        return pascal;
    }
};