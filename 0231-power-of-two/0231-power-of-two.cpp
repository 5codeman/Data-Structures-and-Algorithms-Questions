class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<1) // for negative no. and 0
        {
            return false;
        }
        while(n!=1)
        {
            if(n%2 != 0)
            {
                return false;
            }
            n = n/2;
        }
        return true;
    }
};

/*COMPLEXITY
-> TC = O(logn)
-> SC = O(1)
*/

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna