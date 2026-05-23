class Solution {
public:
    int helper(int k, queue<int> &q, int count) {
        if(q.size() == 1) {
            return q.front();
        }

        if(count != k) {
            int front = q.front();
            q.pop();
            q.push(front);
            return helper(k, q, count + 1);
        }
        else {
            count = 1;
            q.pop();
            return helper(k, q, count);
        }
    }
    int findTheWinner(int n, int k) {
        queue<int> q;
        int count = 1;
        for(int i = 1; i <= n; i++) {
            q.push(i);
        }
        return helper(k, q, count);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna