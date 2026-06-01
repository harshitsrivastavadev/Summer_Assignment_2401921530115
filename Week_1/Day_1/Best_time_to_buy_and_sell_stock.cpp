class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX;
        int profit = 0;
        int maxProfit = 0;
        for(int sell : prices){
            if(sell < buy){
                buy = sell;
            } 
            else {
                profit = sell - buy;
                maxProfit = max(profit, maxProfit);
            }
        }
        return maxProfit;
    }
};
