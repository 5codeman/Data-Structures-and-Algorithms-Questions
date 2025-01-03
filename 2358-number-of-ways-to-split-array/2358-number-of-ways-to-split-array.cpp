class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long right_sum=0;
        long long left_sum=0;
        int count_splits=0;
        
        for(int i=1; i<nums.size(); i++)
        { 
            right_sum += nums[i];
        }
        
        for(int j=0; j<nums.size()-1; j++)
        {
            left_sum += nums[j];
            if(right_sum<=left_sum)
            {
                count_splits++;
            }
            right_sum-=nums[j+1];
        }
        return count_splits;
    }
};