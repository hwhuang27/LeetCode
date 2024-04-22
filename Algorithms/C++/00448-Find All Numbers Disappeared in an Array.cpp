class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        int n = nums.size();

        // negate num at index to mark seen
        for(int i{0}; i < n; i++){
            int index = std::abs(nums[i]) - 1;
            nums[index] = std::abs(nums[index]) * -1;
        }

        std::vector<int> ans;
        for(int i{0}; i < n; i++){
            if(nums[i] > 0){
                ans.push_back(i+1);
            }
        }

        return ans;
    }
};

/*
    O(n)
    O(1)

    use the index
     0 1 2 3
    [1,4,4,4]
*/