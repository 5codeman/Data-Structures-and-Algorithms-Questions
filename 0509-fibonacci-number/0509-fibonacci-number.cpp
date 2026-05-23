class Solution {
public:
    int fib(int n) {
        if(n == 0 || n == 1) return n;
        
        return fib(n - 1) + fib(n - 2);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna