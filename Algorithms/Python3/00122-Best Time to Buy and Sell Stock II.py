class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        buy = -1
        sell = 0
        profit = 0
        size = len(prices)

        for i in range(len(prices)):
            if i+1 < len(prices):
                if prices[i] < prices[i+1] and buy is -1:
                    buy = prices[i]
                    # print(f"buy is {buy} at index {i}")
                elif prices[i] > prices[i+1] and buy is not -1:
                    # sell = prices[i]
                    # print(f"sell is {sell} at index {i}")
                    profit += prices[i] - buy
                    # print(f"profit is {sell} - {buy} = {profit}")
                    buy = -1
                    sell = 0
            else:
                if buy is not -1:
                    sell = prices[i]
                    profit += sell - buy

        return profit    

'''
[7,1,5,3,6,4]
profit = 4 + 3 + 0 = 7

look for ranges where it is increasing
one pass through List
check next number if increasing
    - if NOT increasing, move on
    - if increasing, track first number of range (buy)
    - continue until we see decreasing or end of list
    - take last number of increasing range (sell) and calculate profit
    - continue with loop until end of list
'''