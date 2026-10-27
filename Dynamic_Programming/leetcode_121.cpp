class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_buy = prices[0] ; 
        int profit = 0 ; 
        for(int i = 1 ; i < prices.size() ; i++){
            int local_profit = prices[i] - min_buy ; 
            profit = max(profit , local_profit); 
            min_buy = min(min_buy , prices[i]);  
        }
        return profit ; 
    }
};