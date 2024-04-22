class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        arr = reversed(arr)
        maxNum = -1
        result = []
        for num in arr:
            result.append(maxNum)
            maxNum = max(maxNum, num)
        
        return reversed(result)

'''
[1, 6, 4, 5, 18, 17]
[-1, 1, 6, 6, 6, 18] - return reverse of this array

'''