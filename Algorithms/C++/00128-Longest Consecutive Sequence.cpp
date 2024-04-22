class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set<int> set;

        // populate set 
        for(int i{0}; i < nums.size(); i++){
            set.insert(nums[i]);
        }

        int longestSeq{0};
        for(int i{0}; i < nums.size(); i++){
            if(!set.contains(nums[i]-1)){
                int next = nums[i] + 1;
                int currSeq{1};
                while(set.contains(next)){
                    currSeq++;
                    next++;
                }
                longestSeq = std::max(longestSeq, currSeq);
            }
        }

        return longestSeq;
    }
};

/*
    - cant sort
    - cant use sorted data structure
    - return length of longest consecutive sequence

    algorithm
    - build a set from nums
    - check if number starts a segment (no left neighbor)
    - build segment by finding next values from set
    - take max of longestSeq and currSeq
    - return longestSeq

    [1,2,3,4] --- [100] --- [200]

*/