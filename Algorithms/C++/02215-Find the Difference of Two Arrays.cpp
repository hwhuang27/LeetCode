class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        std::unordered_set<int> set1{nums1.begin(), nums1.end()};
        std::unordered_set<int> set2{nums2.begin(), nums2.end()};

        std::vector<std::vector<int>> result(2);

        // build first result 
        for(const auto& num : set1){
            if(!set2.contains(num)) result[0].push_back(num);
        }

        // build second result 
        for(const auto& num : set2){
            if(!set1.contains(num)) result[1].push_back(num);
        }

        return result;
    }
};

/*
    tc: O(n)
    sc: O(n)

    hash set for both nums1 and nums2 - set1 / set2
*/