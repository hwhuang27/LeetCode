class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_set<int> set;

        for(int i{0}; i < nums.size(); i++){
            if(set.contains(nums[i])) return true;
            set.insert(nums[i]);
        }

        return false;
    }
};

/*
    - use a set
    - run through nums
    - add to set if number is not in set
    - return number if number is already in set
*/