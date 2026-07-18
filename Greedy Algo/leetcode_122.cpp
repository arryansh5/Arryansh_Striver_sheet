class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0 , n = prices.size();
        int profit = 0 ; 
        while(i < n-1){
            while(i < n-1 && prices[i] >= prices[i+1]){
                i++; 
            }
            if(i == n-1) break ; 

            int buy = prices[i]; 
            while(i < n-1 && prices[i] <= prices[i+1]){
                i++;
            }
            int sell = prices[i]; 
            profit += sell - buy  ; 

        } 

        return profit;
    }
};