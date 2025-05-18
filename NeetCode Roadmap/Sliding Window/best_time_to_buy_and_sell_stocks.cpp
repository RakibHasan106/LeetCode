class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=0,profit,buy_price=INT_MAX;
        for(int i = 0; i<prices.size() ; i++){
                if(prices[i]<buy_price){
                    buy_price = prices[i];
                }
                else{
                    profit = prices[i] - buy_price;
                    if(profit>max_profit){
                        max_profit = profit;
                    }
                }            
        }
        return max_profit;
    }
};