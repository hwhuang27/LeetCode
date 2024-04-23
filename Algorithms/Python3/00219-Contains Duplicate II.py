class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        hashmap = {}

        for i, num in enumerate(nums):
            if num in hashmap and (i - hashmap[num]) <= k:
                return True
            hashmap[num] = i

        return False

'''
    tc: O(n)
    sc: O(n)

    use a hash map to track numbers and their indices
    iterating through nums, if we see an existing key:
        check current index to mapped index to see if difference is within k
    [1,2,3,4,1]
    { 
        "1": 4
        "2": 1
        "3": 2
    }
    3 - 0 <= k
        return true

'''