class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        std::string ans;
        std::string first = strs[0];
        int shortest{INT_MAX};

        for(int i{0}; i < strs.size(); i++){
            int strSize = strs[i].size();
            shortest = std::min(shortest, strSize);
        }

        for(int i{0}; i < shortest; i++){
            char prefixChar = strs[0][i];    // ith char of first string
            for(int j{0}; j < strs.size(); j++){
                // found a string that breaks prefixChar condition
                if(strs[j][i] != prefixChar){
                    return ans;
                }
            }    
            // finished one iteration of all strings
            // add prefixChar to ans string
            ans += prefixChar;
        }

        return ans;
    }
};

/*
    O(n) where n = total number of characters in all strings
    O(1)

    - iterate through every character of every string
    - if prefix does not match, immediately return ans


*/