class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        tuples = []
        # make tuples of (sorted, original) string
        for s in strs:
            t = (''.join(sorted(s)), s)
            tuples.append(t)
        
        # use sorted string as key in anagrams map
        anagrams = {}
        for t in tuples:
            key, s = t
            if key not in anagrams:
                anagrams[key] = []
            anagrams[key].append(s)
        
        result = []
        for group in anagrams.values():
            result.append(group)

        return result


'''
method 1 (sort each string):
    [
        (sorted, original)
        ( "aet", "eat" )
        ( "aet", "tea" )
    ]

   "abt" : ["bat"]
   "ant" : ["nat", "tan"]
   "aet" : ["ate","eat","tea"]

'''