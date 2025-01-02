/* Complexity TC = [O(n)], SC = [O(1)] */
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        int currStock = INT_MAX;
        int maxProfit = 0;
        for(int i = 0; i < len; i++) {
            if(prices[i] < currStock) {
                currStock = prices[i];
            }
            else {
                maxProfit = max(maxProfit, (prices[i] - currStock));
            }
        }
        return maxProfit;
    }
};