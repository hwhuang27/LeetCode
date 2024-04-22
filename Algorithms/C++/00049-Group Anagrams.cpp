class Solution {
public:
/*
    algorithm:
        - sort each string in strs alphabetically
        - group strings that are the same with their indices
        - return grouped strings from indices

    ["tan", "nat", "bat"];

    [(0, 1), (2)];
    [["tan", "nat"], ["bat"]];

    "ant" : ["tan", "nat"]
    "abt" : ["bat"]

    std::map<string, std::vector<string>>
    - return array of all values in our map
*/
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::map<string, std::vector<string>> strMap;
        std::string temp;
        std::string original;
        
        for(std::string& str : strs){
            original = str;
            std::sort(str.begin(), str.end());
            temp = str;
            strMap[temp].push_back(original);
        }

        std::vector<std::vector<string>> result;
        for(const auto& [key, value] : strMap){
            result.push_back(value);
        }

        return result;
    }
};