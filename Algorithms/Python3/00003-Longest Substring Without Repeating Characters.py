class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        seen = set()
        start = 0
        maxLen = 0
        for i, c in enumerate(s):
            if c in seen:
                while c in seen:
                    # remove chars from substring and set
                    seen.remove(s[start])
                    start += 1
            else:
                maxLen = max(maxLen, i - start + 1)
            seen.add(c) # add most recent character to map

        return maxLen

'''
"abcabcbb"
(a b c)
b
1
max: 3

- sliding window to create substring
- keep a max variable
- for each new char:
    - check if exists in set
    - if not, add to set and add to substring window
    - if exists, remove characters from end of substring AND from set until char is removed
    - add to set again
    - repeat until end of string


'''