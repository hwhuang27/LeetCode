class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int start{0};

        for(int i{0}; i < nums.size(); i++){
            if(nums[i] != val){
                nums[start] = nums[i];
                start++;
            }
        }

        return start;
    }
};

/*
    2 pointer
    - iterate through nums with one ptr
    - keep another ptr at start
    - if we see a num that is NOT val, then replace start ptr with num
    - otherwise continue until end of nums


*/