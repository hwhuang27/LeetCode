class Solution:
    def maximizeSum(self, nums: List[int], k: int) -> int:
        maxElem = max(nums)
        total = 0
        for i in range(k):
            total += maxElem + i
        return total

'''
    find max element and then sum the series max, max+1, max+2 ... until max+k

'''