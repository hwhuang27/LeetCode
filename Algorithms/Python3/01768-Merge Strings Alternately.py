class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        minLen = min(len(word1), len(word2))

        merged = ""
        for i in range(minLen):
            merged += word1[i]
            merged += word2[i]

        len1 = len(word1)
        len2 = len(word2)

        if len1 == len2:
            return merged
        elif len1 > len2:
            merged += word1[minLen:len1]
        else:
            merged += word2[minLen:len2]
        
        return merged


'''
    2 pointer 
        - find the minimum length of both words (minLen)
        - iterate through minLen times for both words
        - figure out the larger word
        - append the rest of the larger word to the end of output
        - return output

    tc: O(n)
    sc: O(1)


'''