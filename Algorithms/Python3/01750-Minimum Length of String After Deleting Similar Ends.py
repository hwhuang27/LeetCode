class Solution:
    def minimumLength(self, s: str) -> int:
        start = 0
        end = len(s)-1

        while start < end:
            if s[start] == s[end]:
                remove = s[start]
                while s[start] == remove and start < end:
                    start += 1
                while s[end] == remove and end >= start:
                    end -= 1
            else:
                break

        return end - start + 1

'''
    2 pointers (start / end)
        - check if char at start == end
        - keep removing that char until new char seen or start >= end
        - return (end - start)

'''