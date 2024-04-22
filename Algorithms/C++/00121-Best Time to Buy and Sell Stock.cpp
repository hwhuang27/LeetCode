class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy{0};
        int sell{0};
        int profit{0};
        while(sell < prices.size()){
            if(prices[sell] < prices[buy]){
                buy = sell;
            }
            profit = std::max(profit, prices[sell] - prices[buy]);
            sell++;
        }
        return profit;
    }
};

/*
    tc: O(n)
    sc: O(1)

    2 pointers

    [7,1,5,3,6,4]

    is next number a better buy than current?
        if yes, then move to better buy
        if no, then calculate profit
    return max profit

    profit = 5
    




    


*/