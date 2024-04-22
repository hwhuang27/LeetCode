class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        // case 1
        if(nums[0] >= 0){
            for(int i{0}; i < n; i++){
                nums[i] = nums[i] * nums[i];
            }
            return nums;
        }
        // case 2
        if(nums[n-1] < 0){
            for(int i{0}; i < n; i++){
                nums[i] = nums[i] * nums[i];
            }
            std::reverse(nums.begin(), nums.end());
            return nums;
        }
        // case 3
        std::vector<int> ans;
        for(int i{0}; i < n; i++){
            nums[i] = std::abs(nums[i]);
        }
        int start{0};
        int end{n-1};

        while(start <= end){
            if(nums[start] < nums[end]){
                ans.push_back(nums[end] * nums[end]);
                end--;
            } else{
                ans.push_back(nums[start] * nums[start]);
                start++;                
            }
        }

        std::reverse(ans.begin(), ans.end());
        return ans;
    }
};

/*
    O(nlogn)
    - absolute val, sort, square nums

    O(n)
        case 1: all numbers are positive
        [1,2,3]
        case 2: all numbers are negative
        [-3,-2,-1]
        case 3: both positive and negative numbers
        [-2,0,1]    (consider 0 as positive)

        - have a start and end pointer
        - abs value all nums
        - make reversed output array
        [100,16,9,1,0]

    sc: O(n)
        
*/