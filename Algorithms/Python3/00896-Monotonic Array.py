class Solution:
    def isMonotonic(self, nums: List[int]) -> bool:
        copy = nums[::1]
        copy.sort(reverse=True)
        if(copy == nums):
            return True
        copy.sort()
        if(copy == nums):
            return True

        return False


'''
sort array desc, check if equals to original
sort array asc, check if equals to original

if not either, then return False
'''
