class Solution:
    def countWords(self, words1: List[str], words2: List[str]) -> int:
        map1 = {}
        map2 = {}

        for word in words1:
            if word in map1:
                map1[word] += 1
            else:
                map1[word] = 1

        for word in words2:
            if word in map2:
                map2[word] += 1
            else:
                map2[word] = 1        

        count = 0
        for key, value in map1.items():
            if (value == 1) and (key in map2) and (map2[key] == 1):
                count += 1

        return count

'''
words1 HashMap
leetcode: 1
is: 2
amazing: 1
as: 1

words2 HashMap
amazing: 1
leetcode: 1
is: 1

iterate through words1 Map
    - if value of string == 1
    - check value of string in Map2 if == 1
    - if True, +1 count
    - return count

'''