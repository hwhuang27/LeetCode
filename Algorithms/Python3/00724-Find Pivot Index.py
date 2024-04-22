class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        total = sum(nums)
        leftSum = 0
        for i, pivot in enumerate(nums):
            rightSum = total - pivot - leftSum
            if leftSum == rightSum:
                return i
            leftSum += pivot
        
        return -1

'''
[1,7,3,6,5,6]
leftSum = 1
rightSum = total - pivot - leftSum = 27
28 - 7 - 1 = 20
sum = 28

tc: O(n)
sc: O(1)

'''