class Solution:
    def hIndex(self, citations: List[int]) -> int:
        citations.sort()
        h_index = len(citations)

        zeroes = True

        for n in citations:
            if n > 0:
                zeroes = False
            if n >= h_index:
                return h_index
            h_index -= 1
        
        # check if numbers are all zeroes
        if zeroes:
            return 0
        
        return 1

'''
sort List

[0, 1, 3, 5, 6]
       3 
take the length of List

[0, 1, 3]

return 1 if we reach end of List without finding valid H-index

[0]

return 0

'''