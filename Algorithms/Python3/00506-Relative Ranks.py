class Solution:
    def findRelativeRanks(self, score: List[int]) -> List[str]:
        sortedScore = sorted(score, reverse=True)
        dictScore = {}

        for i, s in enumerate(sortedScore):
            if i == 0:
                dictScore[s] = "Gold Medal"
            elif i == 1:
                dictScore[s] = "Silver Medal"
            elif i == 2:
                dictScore[s] = "Bronze Medal"
            else:
                dictScore[s] = str(i+1)
        
        results = []
        for s in score:
            results.append(dictScore[s])

        return results
'''
Sort scores in another List (descending)
[10, 9, 8, 4, 3]
Build a dict
{
    10: "Gold Medal"
    9: "Silver Medal"
    8: "Bronze Medal"
    4: "4"
    3: "5"
}

Iterate through original List and append dict val to result List

'''
