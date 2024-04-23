class Solution:
    def minimumDifference(self, nums: List[int], k: int) -> int:
        nums = sorted(nums)
        minDiff = sys.maxsize
    
        for i in range(len(nums) - k + 1):
            minDiff = min(minDiff, nums[k-1+i] - nums[i])
            # window size = k
            # start = nums[i]
            # end = nums[k-1+1]

        return minDiff

'''
    O(nlogn)
    O(1)

[9,4,1,7], k=2
[9,7] = 2
[9,7,4] = 5

sort the array
[1,4,7,9]
 
iterate (size - k + 1) times


pick largest number - 9
pick number at (size - k)th index - 7

return difference of two numbers

'''