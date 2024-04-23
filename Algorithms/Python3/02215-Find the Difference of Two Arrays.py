class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        set1 = set(nums1)
        set2 = set(nums2)
        answer = [] # return this
        result = set()
        for num in nums1:
            if num not in set2:
                result.add(num)
        
        answer.append(list(result))
        result.clear()
        for num in nums2:
            if num not in set1:
                result.add(num)

        answer.append(list(result))
        return answer
    
'''
    tc: O(n)
    sc: O(n)
    use two sets

    to find answer[0]
        - make a set for nums2
        - iterate nums1 to find any nums not in set2
        - place into new set
        
    to find answer[1]
        - make a set for nums1
        - iterate nums2 to find any nums not in set1
        - place into new set

'''