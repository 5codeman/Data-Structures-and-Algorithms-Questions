class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int ans = nums[0];
        // int fm = INT_MAX;
        // int sm = INT_MAX;
        // for(int i = 1; i < nums.size(); i++)
        // {
        //     if(nums[i] ) // think on this// and think on what i think
        // }
        nums[0] = 0;
        
        sort(nums.begin(), nums.end());
        
        ans += nums[1];
        ans += nums[2];
        
        return ans;
    }
};