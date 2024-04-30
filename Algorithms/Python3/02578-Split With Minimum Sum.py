class Solution:

    def splitNum(self, num: int) -> int:
        # get digits from num
        digits = []
        while num != 0:
            digits.append(num % 10)
            num = num//10
        digits.sort()

        # create two numbers
        num1 = []
        num2 = []
        for i, n in enumerate(digits):
            if i % 2 == 0:
                num1.append(n)
            else:
                num2.append(n)

        # change list of digits into full number
        num1 = joinNumber(num1)
        num2 = joinNumber(num2)
        return num1 + num2

def joinNumber(num: List[int]) -> int:
    num = map(str, num)     # cast all numbers into string
    num = ''.join(num)      # join into string
    num = int(num)          # cast into int
    return num
        

'''

example 1: 

[4, 3, 2, 5]
[2, 3, 4, 5]
num1: 24
num2: 35

'''