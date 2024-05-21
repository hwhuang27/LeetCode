class Solution:
    def maximumNumberOfStringPairs(self, words: List[str]) -> int:
        pairs = set()
        count = 0
        for word in words:
            if word in pairs:
                count += 1
                pairs.remove(word)
            else:
                pairs.add(word[::-1])

        return count 


'''
iterate thru words
reverse word, add to set
if future words are in set, remove from set, add 1 to count, DO NOT add another to set
return count

{ zz }
count = 2

'''