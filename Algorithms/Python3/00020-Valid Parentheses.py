class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        closedMap = {
            ")" : "(",
            "}" : "{",
            "]" : "["
        }

        for c in s:
            if c in closedMap:
                if stack and stack[-1] == closedMap[c]:
                    stack.pop()
                else: 
                    return False
            else:
                stack.append(c)
        
        return not stack

'''
stack

"(({{[[)]}}))"
1) stack is empty -> string is valid
2) right bracket doesnt correspond to left bracket -> string is invalid

if stack is empty at end, return true

use a dictionary / map to map closed brackets to open brackets
'''