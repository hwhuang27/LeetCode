class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::unordered_map<int, int> map;

        for(int i{0}; i < nums.size(); i++){
            map[nums[i]]++;
        }
        int target = nums.size() / 2;
        for(const auto& [key, value] : map){
            if(value > target) return key;
        }

        return -1;
    }
};

/*
    tc: O(n)
    sc: O(n)

    - map frequencies
    - return the number with frequency of > n/2

*/