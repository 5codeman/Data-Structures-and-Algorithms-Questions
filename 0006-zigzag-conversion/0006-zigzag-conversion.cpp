class Solution {
public:
    string convert(string s, int numRows) {
        string str = "";
        int len = s.size();
        // Edge Case
        if(numRows == 1) return s;
        for(int i = 0; i < numRows; i++) {
            int index = i;
            bool flag = true;
            while(index < len) {
                str += s[index];
                if(i == 0 || i == numRows - 1) {
                    index += (numRows * 2) - 2;
                }
                else {
                    if(flag == true) index += 2 * (numRows - i) - 2;
                    else index += 2 * i;
                    flag = !flag;
                }
                cout << index;
            }
        }
        return str;
    }
};