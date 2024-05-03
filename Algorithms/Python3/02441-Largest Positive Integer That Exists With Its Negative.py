class Solution:
    def findMaxK(self, nums: List[int]) -> int:
        nset = set()

        for num in nums:
            nset.add(num)
        
        nums.sort(reverse=True)

        for num in nums:
            if num < 0:
                break
            if (num * -1) in nset:
                return num
            
        return -1


'''
sort array descending
add to list
iterate until end of list or negative number
return first number that also has corresponding negative num

[1000, 999, 998 ...]
'''