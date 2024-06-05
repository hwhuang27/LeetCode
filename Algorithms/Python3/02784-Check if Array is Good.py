class Solution:
    def isGood(self, nums: List[int]) -> bool:
        base = max(nums)
        if(len(nums) != base+1):
            return False

        hashmap = {}
        for num in nums:
            if num in hashmap and num != base:
                return False
            elif num in hashmap and num == base:
                hashmap[num] += 1
            else:
                hashmap[num] = 1
        
        if hashmap[base] == 2:
            return True

        return False

'''
1) find max elem
2) check if length == n + 1
3) sort and check if array == base(n)
or make hashmap to count occurences

sort array
tc: O(nlogn)

hashmap
tc: O(n)
sc: O(n)

'''