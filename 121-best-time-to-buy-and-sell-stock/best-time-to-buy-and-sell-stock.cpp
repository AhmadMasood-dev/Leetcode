class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX;  // Initialize min_price to the largest possible value
        int max_profit = 0;       // Initialize max_profit to 0
        
        for (int price : prices) {
            // Update the minimum price so far
            min_price = min(min_price, price);
            
            // Calculate the profit if we sold at the current price
            int profit = price - min_price;
            
            // Update the maximum profit if the current profit is greater
            max_profit = max(max_profit, profit);
        }
        
        return max_profit;
    }
};
