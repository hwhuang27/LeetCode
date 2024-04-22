class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s = s.rstrip()
        size = len(s)
        count = 0
        for i in reversed(range(size)):
            if s[i] == ' ':
                return count
            count += 1

        return count

        # s = s.strip()
        # words = s.split(' ')
        # return len(words[-1])