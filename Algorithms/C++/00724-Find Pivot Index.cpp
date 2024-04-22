class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int right{0};
        for(int i{0}; i < nums.size(); i++){
            right += nums[i];
        }

        int left{0};
        int pivot{0};
        while(pivot < nums.size()){
            right -= nums[pivot];
            if(left == right) return pivot;
            left += nums[pivot];
            pivot++;
        }

        return -1;
    }
};

/*
    tc: O(n)
    sc: O(1)

    [-1,-1,-1,-1,-1,0]
    left = -1
    right = -3
    pivot = 1

    while( left < right)
        if(left == right) return index

    return -1

    pass 1: sum entire array
    pass 2: iterate pivot from left to right to find index

*/
