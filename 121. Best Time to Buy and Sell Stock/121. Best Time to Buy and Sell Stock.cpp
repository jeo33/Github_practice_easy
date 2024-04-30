#include<vector>
using namespace std;
class Solution {
public:
    Solution(){};
    int maxProfit(vector<int>& prices) {
        int buy=0;
        int sell=0;
        int profit=0;
        int sell_price=prices[sell];
        int buy_price=prices[buy];
        for(int i=0;i<prices.size();i++){
            if(prices[i]<buy_price){
                buy_price=prices[i];
                sell_price=prices[i];
            }
            else if (prices[i]>sell_price)
            {
                sell_price=prices[i];
                profit=max(profit,sell_price-buy_price);
            }
        }
        return profit;
    }
};

