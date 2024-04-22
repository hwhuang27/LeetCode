class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        std::vector<std::vector<int>> ans;

        for(int i{0}; i < nums.size()-2; i++){
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }

            int target = nums[i] * -1;
            int l = i+1;
            int r = nums.size()-1;
            
            while(l < r){
                int lrSum = nums[l] + nums[r];
                if(lrSum > target){
                    r--;
                } else if(lrSum < target){
                    l++;
                } else{     
                    ans.push_back(std::vector<int>{nums[i], nums[l], nums[r]});
                    
                    l++;
                    while(l < r && nums[l] == nums[l-1]){
                        l++;
                    }

                    r--;
                    while(r > l && nums[r] == nums[r+1]){
                        r--;
                    }
                }
            }
        }

        return ans;
    }
};

/*
    [-4, -1, -1, 1, 1, 2]
    i = -4
    l = -1
    r = 2

    target = 4

    [-1,0,1,2,-1,-4]
    {
        0: 1
        1: 

    }

    (-1, 0)
    (0, 1)
    (1, 2)
    (2, 3)

*/