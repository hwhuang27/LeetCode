class Solution {
public:
    int characterReplacement(string s, int k) {
        std::map<char, int> map;
        int max = 0;
        int left = 0;
        for(int right{0}; right < s.size(); right++){
            // add char count to map
            map[s[right]]++;

            // find most freq char
            int mostFreq = 0;
            for(const auto& [key, value] : map){
                mostFreq = std::max(mostFreq, value);
            }

            // adjust window
            while(!((right-left+1) - mostFreq <= k)){

                map[s[left]]--; // remove char from map
                left++;
            }
            
            max = std::max(max, right - left + 1);
        }

        return max;
    }
};
/*
    AABABBA, k = 2

    ABABB
    5 - 3 <= 2
    A: 3
    B: 3

    for window to be valid:
        max = substring size - chars NOT most common <= k
    if we reach index where condition != true
        shrink window until it is true

    - sliding window
    - use a map to find most freq char
    - in substring of most common char, at most k different chars
    - valid window condition
    - return max

    A - 65
    Z - 90
*/