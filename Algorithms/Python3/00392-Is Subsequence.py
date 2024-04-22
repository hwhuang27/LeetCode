class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        if len(s) == 0:
            return True
            
        sp = 0
        tp = 0

        for i in range(len(t)):
            if s[sp] == t[tp]:
                sp += 1
            if sp == len(s):
                return True
            tp += 1
        
        return False

'''
    s = abc
    t = ahbgdc

    return true if we are at end of s
    return false if we are at end of t


'''