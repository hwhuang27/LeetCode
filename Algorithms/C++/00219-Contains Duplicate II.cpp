class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        std::unordered_map<int, int> map;
        for(int i{0}; i < nums.size(); i++){
            if(map.contains(nums[i])){
                int index = map[nums[i]];
                if(i - index <= k) return true;
            }
            map[nums[i]] = i;
        }

        return false;
    }
};

/*
    3 - 2 = 1
    3 - 1 = 2
    tc: O(n)
    sc: O(n)
    use unordered map

    - iterate through nums once
    - store index and nums in map
    - ALSO check if nums is contained in map
    - if contained in map, then check if indices/values are differing by k
    - update value key (keep the most recent one)


    2 distinct indices (i, j) where both values are same
    AND
    abs(i - j) <= k
    abs(i - j) <= 1

    i = 3
    j = 2

    max index range = k + 1

    algorithm
        - iterate through nums
        - for each num, check in front k times for a duplicate (bounding the end)
        - if duplicate, return true
        - return false

    O(n * k) == O(n^2)?
    O(1)

*/