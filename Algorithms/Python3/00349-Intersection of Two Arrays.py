class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        set1 = set(nums1)
        result = set()
        for num in nums2:
            if num in set1:
                result.add(num)
        
        return list(result)

'''
    turn nums1 into a set
    iterate thru nums2 to check if exists in set
    add to result set and return casted into a List
'''