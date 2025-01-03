/* Complexity TC = [O(nlogn + n)], SC = [O(1)] */
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        vector<vector<int>>arr;

        int start = intervals[0][0];
        int end = intervals[0][1];
        int len = intervals.size();

        for(int i = 1; i < len; i++) {
            if(intervals[i][0] <= end) {
                end = max(end, intervals[i][1]);
            }
            else {
                vector<int>temp(2);
                temp[0] = start;
                temp[1] = end;
                arr.push_back(temp);
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }
        // For last interval
        vector<int>temp(2);
        temp[0] = start;
        temp[1] = end;
        arr.push_back(temp);
        return arr;
    }
};