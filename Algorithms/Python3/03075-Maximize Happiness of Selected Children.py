class Solution:
    def maximumHappinessSum(self, happiness: List[int], k: int) -> int:
        happiness.sort(reverse=True)
        
        hsum = 0
        for i, happy in enumerate(happiness):
            if happy - i > 0 and k > 0:
                hsum += happy - i
            k -= 1

        return hsum


'''
sort List descending
iterate k times
sum up count, but also subtract according to k

binary search to find ONE max: O(logn)
do this k times -> O(klogn)
'''