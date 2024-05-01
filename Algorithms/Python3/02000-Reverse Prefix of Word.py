class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
        n = word.find(ch)
        if n == -1:
            return word

        word = word[:n+1][::-1] + word[n+1:]
        return word 
        
'''
    find index "n" of first occurance of ch

    substring from index 0 to n should be reversed

    return new string
'''