class Solution {
public:
    int helper (int n, int i) {
        if(n < i) {
            return 0;
        }
        int count = 0;
        count = helper(n, i * 5);
        count += n / i; 
        return count;
    }
    int trailingZeroes(int n) {
        return helper(n, 5);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna