class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        counts = {}
        for num in nums:
            if num in counts:
                counts[num] = counts.get(num) + 1
            else:
                counts[num] = 1

        size = len(nums)
        for c, v in counts.items():
            if v > (size/2):
                return c

        return -1 
        
'''
    count elements in dict
    return key with value larger than size of list / 2

    tc: O(n)
    sc: O(n)
'''