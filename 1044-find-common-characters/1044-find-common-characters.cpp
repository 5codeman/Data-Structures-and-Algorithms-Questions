class Solution {
public:
    vector<string> commonChars(vector<string>& matrixString) {
    vector<int> arr(26, 0);
    vector<string> output;

    for(int i = 0; i < matrixString[0].size(); i++) {
        int index = matrixString[0][i] - 'a';
        arr[index]++;
    }

    for(int i = 1; i < matrixString.size(); i++) {
        vector<int> arr2(26, 0);
        for(int j = 0; j < matrixString[i].size(); j++) {
            int index = matrixString[i][j] - 'a';
            arr2[index]++;
        }

        for(int j = 0; j < 26; j++) {
            arr[j] = min(arr[j], arr2[j]);
        }
    }

    for(int i = 0; i < 26; i++) {
        for(int j = 0; j < arr[i]; j++) {
            char ans = (i + 'a');
            string s = "";
            s += ans;
            output.push_back(s);
        }
    }
    return output;
    }
};