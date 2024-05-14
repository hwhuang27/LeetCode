class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        vowels = {'a', 'e', 'i', 'o', 'u'}
        currVowels = 0
        for i in range(k):
            if s[i] in vowels:
                currVowels += 1

        result = currVowels
        l = 0
        r = k-1
        while r < len(s):
            if r + 1 == len(s):
                break

            if s[l] in vowels:
                currVowels -= 1
            l += 1
            r += 1
            if s[r] in vowels:
                currVowels += 1
                result = max(result, currVowels)

        return result

'''
sliding window of size k

k = 3
abciiidef

shift window right by 1
recalculate max # of vowels

'''