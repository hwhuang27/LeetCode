class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        std::vector<int> ans{-1};
        if(arr.size() == 1) return ans;

        std::reverse(arr.begin(), arr.end());
        int maxVal{0};
        for(int i{0}; i < arr.size()-1; i++){
            maxVal = std::max(maxVal, arr[i]);
            ans.push_back(maxVal);
        }
        std::reverse(ans.begin(), ans.end());

        return ans;
    }
};

/*
    tc: O(n)
    sc: O(n)

    arr = [17,18,5,4,6,1]
          [1, 6, 4, 5, 18, 17]
    ans = [-1, 1, 6, 6, 6, 18]

    - reverse original array
    - insert -1 to first position
    - track maxValue seen, iterate n-1 times
    - insert maxValue at each index
    - reverse answer array

    iterate n-1 times, reversed

    brute force - O(n^2)

    2 pointers 

    - start from the right side, iterate until 1st index
    - keep a max value, and its index
    
    - from index 0 to indexMax 

*/