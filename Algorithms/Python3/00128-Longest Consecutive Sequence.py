class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if not nums:
            return 0

        hashset = set(nums)
        longestConsecutive = 1

        for num in hashset:
            consecutive = 1
            if num-1 not in hashset:
                num += 1 
                while(num in hashset):
                    consecutive += 1
                    num += 1

            longestConsecutive = max(longestConsecutive, consecutive)

        return longestConsecutive

'''
hashset
(100, 4, 200, 1, 3, 2)

check if num is FIRST in subsequence
if not first, skip
if first, check length of subsequence

100
check for 101
4
check for 5
200
check for 201
1
check for 2
check for 3
check for 4 

return max consecutive elems

tc: O(n + n + max cons. elems)
sc: O(n)
'''