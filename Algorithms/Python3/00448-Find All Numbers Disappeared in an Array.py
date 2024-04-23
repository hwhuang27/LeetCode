class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        hashset = set(nums)
        result = []
        for i in range(1, len(nums)+1):
            if i not in hashset:
                result.append(i)
        
        return result

'''
    tc: O(n)
    sc: O(n)
    put numbers into an unordered set
    run through 1 to n to check for missing numbers in set

    tc: O(n)
    sc: O(1)
    use indices to check if number is missing
    use swaps because of inplace solution

    iterate through nums and swap number with its index
    
    [4,3,2,7,8,2,3,1]
    [7,3,2,4,8,2,3,1]

    [1,1]
    [-1,1]
'''