/*
      Day 02 
      
      #  Stock Buy and Sell – Multiple Transaction Allowed  #

      c++

      21/11/2024 

*/

int maximumProfit(vector<int> &prices) {
        // code here
        int n = prices.size();
    if (n == 0) return 0;
    
    int profit = 0;
    
    for (int i = 1; i < n; i++) {
        
        if (prices[i] > prices[i - 1]) {
            profit += prices[i] - prices[i - 1];
        }
    }
    
    return profit;
    }
