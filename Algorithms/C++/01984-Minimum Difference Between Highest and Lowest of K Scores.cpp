class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        std::sort(nums.begin(), nums.end());
        int l{0};
        int r = k - 1;
        int min = INT_MAX;

        for(int i{0}; i < nums.size() - k + 1; i++){
            if(r < nums.size()) min = std::min(min, nums[r] - nums[l]);
            l++;
            r++;
        }

        return min;
    }
};

/*
    tc: O(nlogn)
    sc: O(n)

    tc: O(nlogn)
    sc: O(n)
    - sort the array
    - sliding window of size k
    - check min of nums[right] - nums[left]
    
    [1,4,7,100]

*/