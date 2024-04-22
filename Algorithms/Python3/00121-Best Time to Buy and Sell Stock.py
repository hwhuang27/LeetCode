class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        buy = sys.maxsize
        maxProfit = 0

        for price in prices:
            if price < buy:
                buy = price
            maxProfit = max(maxProfit, price - buy)
        
        return maxProfit

'''
tc: O(n)
buy low, sell high
    - find a day, where price is lowest
    - sell on same day or some day after

keep track of lowest buy price
iterate through prices to find either a) lower buy price or 2) max sell price

'''