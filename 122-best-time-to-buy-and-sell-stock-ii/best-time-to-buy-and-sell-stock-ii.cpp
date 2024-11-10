class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        
        // Traverse the prices array and add the positive differences
        for (int i = 1; i < prices.size(); ++i) {
            // If the price on the current day is lower than the next day,
            // it means we can buy on the current day and sell on the next day.
            if (prices[i] > prices[i - 1]) {
                max_profit += prices[i] - prices[i - 1];
            }
        }
        
        return max_profit;
    }
};
