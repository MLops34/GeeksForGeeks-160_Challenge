class solution{
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        if (prices.empty()) return 0;
    
    int minPrice = prices[0];
    int maxProfit = 0;
    
    for (int price : prices) {
        minPrice = std::min(minPrice, price);
        maxProfit = std::max(maxProfit, price - minPrice);
    }
    
    return maxProfit;
    }
};