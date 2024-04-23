class Solution:
    def arraySign(self, nums: List[int]) -> int:
        if 0 in nums:
            return 0
        
        result = 1
        for num in nums:
            if num < 0:
                result *= -1
    
        return result
        
'''
    - find out if there is a zero in our nums (return 0)
    - set initial answer to 1
    - swap sign when we see a negative num
    - return answer


'''