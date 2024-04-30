class Solution:
    def miceAndCheese(self, reward1: List[int], reward2: List[int], k: int) -> int:
        profit = []
        index = 0
        for first, second in zip(reward1, reward2):
            profit.append((first-second, index))
            index += 1

        profit.sort()   # sort on first element of tuple, the profit

        # pop k elements from profit, and remove corresponding value from reward2's index
        score = 0
        for i in range(k):
            net, index = profit.pop()
            score += reward1[index] # add reward1[index] to score
            reward2[index] = -1     # remove reward2[index] (set to -1)
        
        # add up reward2's index excluding removed indices (-1)
        for cheese in reward2:
            if cheese != -1:
                score += cheese

        return score

'''
[1,1,3,4]
[4,4,1,1]

[(-3,0), (-3,1), (2,2), (3,3)]
from this net profit array, pick the k highest POSTIVE numbers

assuming 2nd mice eats everything else???

'''