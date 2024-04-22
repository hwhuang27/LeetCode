class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;

        while(start <= end){
            int mid = start + ((end - start)/2);

            if(target == nums[mid]){
                return mid;
            } else if(target > nums[mid]){
                start = mid+1;
            } else if(target < nums[mid]){
                end = mid-1;
            }
        }

        return -1;
    }
};

/*
    tc: O(logn)
    sc: O(1)

    [-1,0,3,5,9,12]
    1
    
    - take middle element of array, compare with target

    - if target < mid, search left subarray
    - if target > mid, search right subarray

    - if start >= end, return -1 (target not found)



*/