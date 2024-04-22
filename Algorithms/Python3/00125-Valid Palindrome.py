class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = filter(lambda x: x.isalnum(), s)    # return list of only alnum chars
        s = "".join(s).lower()                  # join list into string
        s = s.replace(" ", "")                  # remove whitespaces

        l = 0
        r = len(s)-1

        while(l < r):
            if(s[l] != s[r]):
                return False
            l += 1
            r -= 1

        return True