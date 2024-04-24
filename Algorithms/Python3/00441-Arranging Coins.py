class Solution:
    def arrangeCoins(self, n: int) -> int:
        row = 0
        coinsUsed = 0
        while coinsUsed <= n:
            row += 1
            coinsUsed += row

        return row - 1

'''
tc: O(logn)
sc: O(1)
binary search approach
(not implemented)

tc: O(n)
sc: O(1)
5
1: 1
2: 1 + 2 = 3
3: 1 + 2 + 3 = 6
return (row) 2

while totalCoinsUsed <= n
    add new rows
    check if amount of coins used > n
return max number of rows created
'''