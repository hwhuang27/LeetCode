class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split(' ')
        if len(pattern) is not len(words):
            return False
        
        charToWord = {}
        wordToChar = {}
        
        for c, word in zip(pattern, words):
            if c in charToWord and charToWord[c] != word:
                return False
            if word in wordToChar and wordToChar[word] != c:
                return False
            charToWord[c] = word
            wordToChar[word] = c

        return True
            
'''
    2 way mapping
    2 hash maps    

a: dog
b: cat

dog: a
cat: b

abba = dog cat fish dog
b: cat
c: cat

'''