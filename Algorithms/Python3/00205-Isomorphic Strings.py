class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        
        sMap = {}
        tMap = {}
        size = len(s)
        for i in range(size):
            # check mapping from s to t
            if s[i] in sMap:
                if sMap.get(s[i]) is not t[i]:
                    return False
            else:
                sMap[s[i]] = t[i]
            # check mapping from t to s
            if t[i] in tMap:
                if tMap.get(t[i]) is not s[i]:
                    return False
            else:
                tMap[t[i]] = s[i]

        return True

'''
use two maps for a two-way mapping
sMap
e: a
g: d

tMap
a: e
g: d

sMap
f: b
o: a

'''