class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        std::unordered_map<char,int> map;
        std::unordered_map<char,int> map2;
        for(int i{0}; i < s1.size(); i++){
            map[s1[i]]++;
        }

        int left = 0;
        for(int right = 0; right < s2.size(); right++){
            map2[s2[right]]++;

            if(map == map2){
                return true;
            } else if(right - left + 1 == s1.size()){
                map2[s2[left]]--;

                // if no chars left in map, erase from map
                if(map2[s2[left]] == 0) map2.erase(s2[left]);

                left++;
            }

        }

        return false;
    }
};

/*
    sliding window of size s1.size()

*/