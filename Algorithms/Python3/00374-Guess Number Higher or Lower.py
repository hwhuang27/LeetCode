# The guess API is already defined for you.
# @param num, your guess
# @return -1 if num is higher than the picked number
#          1 ifnum is lower than the picked number
#          otherwise return  0
# def guess(num: int) -> int:

class Solution:
    def guessNumber(self, n: int) -> int:
        result = 2
        l = 1
        r = n
        while result != 0:
            mid = l + ((r-l)/2)
            result = guess(mid)
            if result == -1:
                r = mid-1
            elif result == 1:
                l = mid+1
        
        return int(mid)

'''
[1,2,3,4,5]

(1 + 5 / 2) = 3

-1: num > target
1: num < target
0: num == target

'''