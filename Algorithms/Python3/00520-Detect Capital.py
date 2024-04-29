class Solution:
    def detectCapitalUse(self, word: str) -> bool:
        if word == word.upper():
            return True
        elif word == word.lower():
            return True
        elif word == word.capitalize():
            return True

        return False



'''
handle all 3 cases 

case 1: all chars are capital

case 2: all chars are non-capital

case 3: only first char is capital

'''