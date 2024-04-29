class Solution:
    def maxScore(self, nums: List[int]) -> int:
        nums.sort(reverse = True)
        prefix = []
        current = 0
        for n in nums:
            current += n
            prefix.append(current)

        count = 0
        for n in prefix:
            if n > 0:
                count += 1
        
        return count
'''
[2,-1,0,1,-3,3,-3]

maximize number of positive nums in prefix array
(by rearranging original array)

sort array decreasing

'''