class Solution:
    def arithmeticTriplets(self, nums: List[int], diff: int) -> int:
        lowest = nums[-1] - (diff * 2)
        count = 0
        numSet = set(nums)
        for num in nums:
            if num <= lowest:
                if (num + diff) in numSet and (num + diff*2) in numSet:
                    count += 1
    
        return count
'''
lowest = largest - (diff * 2)

if num < lowest:
    check if num + diff in set
    check if num + diff * 2 in set
    if yes, count + 1

return count

'''