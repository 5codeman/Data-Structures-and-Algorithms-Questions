/* Complexity TC = [O(n)], SC = [O(1)] */
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int len = nums.size();
        int startIndex = 0;
        int endIndex = len - 1;
        for(int i = 0; i <= endIndex; i++) {
            if(nums[i] == 0) {
                swap(nums[i], nums[startIndex]);
                startIndex++;
            }
            else if(nums[i] == 2) {
                swap(nums[i], nums[endIndex]);
                endIndex--;
                i--;
            }
        }
        
    }
};