class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        mySet = set()
        for num in nums:
            if num in mySet:
                return True
            mySet.add(num)
        
        return False

'''
use a hash set
    iterate through nums
    check set if num exists
        if doesn't exist, add to set
        if exists, return true
    
    return false

'''