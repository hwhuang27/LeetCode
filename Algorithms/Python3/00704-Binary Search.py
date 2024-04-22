class Solution:
    def search(self, nums: List[int], target: int) -> int:
        start = 0
        end = len(nums)-1

        while(start <= end):
            mid = int(start + (end-start)/2)
            if(nums[mid] == target):
                return mid
            elif(nums[mid] > target):
                end = mid-1
            elif(nums[mid] < target):
                start = mid+1

        return -1
'''
tc: O(logn)
sc: O(1)

start = 0
end = len-1

while(start)

'''