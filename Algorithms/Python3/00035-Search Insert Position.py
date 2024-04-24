class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        start = 0 
        end = len(nums)-1

        while start <= end:
            mid = int(start + (end-start)/2)
            if target < nums[mid]:
                end = mid-1
            elif target > nums[mid]:
                start = mid+1
            else:
                return mid

        return start


'''
    start = 0
    end = 1

    binary search
        - check mid value
        - if less than target, then check right subarray
        - if greater than target, then check left subarray
        - return target if equals mid

'''