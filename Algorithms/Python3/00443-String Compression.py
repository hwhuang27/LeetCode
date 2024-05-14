class Solution:
    def compress(self, chars: List[str]) -> int:
        index = 0
        count = 1

        for i in range(len(chars)):
            curr = chars[i]

            if i < len(chars)-1:
                if chars[i] == chars[i+1]:
                    count += 1
                else:
                    chars[index] = curr
                    index += 1
                    digits = []
                    if count > 1:
                        # add digits in place
                        while count > 0:
                            digits.insert(0, count % 10)
                            count = count // 10
                    for n in digits:
                        chars[index] = str(n)
                        index += 1
                    count = 1   # count gets reset here
            else:
                chars[index] = curr
                index += 1
                digits = []
                if count > 1:
                    # add digits in place
                    while count > 0:
                        digits.insert(0, count % 10)
                        count = count // 10
                for n in digits:
                    chars[index] = str(n)
                    index += 1

        return index
                
'''
    keep 2 pointers (one for index, one for iterating)
    
'''