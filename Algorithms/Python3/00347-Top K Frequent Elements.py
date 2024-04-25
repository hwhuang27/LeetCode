class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq = {}
        for num in nums:
            if num in freq:
                freq[num] += 1
            else:
                freq[num] = 1
        
        heap = []
        for num, count in freq.items():
            heappush(heap, (count, num))
        
        results = nlargest(k, heap)
        return [tup[1] for tup in results]
        # result = []
        # for i in range(k):
        #     result.append(heappop(heap)[1])

        # return result


'''
tc: O(nlogn) because of heap insertion
sc: O(n)

count freq of each num in dictionary
add (key,value) tuple into a max heap as (count, num)
pop top k tuples and add to a list
return list
'''