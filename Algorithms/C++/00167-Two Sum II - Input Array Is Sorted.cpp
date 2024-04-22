class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size()-1;
        while(numbers[l] + numbers[r] != target){
            int sum = numbers[l] + numbers[r];
            if(sum > target){
                r--;
            }
            else if(sum < target){
                l++;
            }
        }
        return std::vector<int>{l+1, r+1};
    }
};

/*
    2 pointer
    
    [2,7,11,15]

    left = 2
    right = 15
    sum = 17
    sum > target -> move right ptr
    
    l = 2
    r = 11
    s = 13

    l = 2
    r = 7
    s = 9
    return 9

    is sum less than or greater than target?
    

*/