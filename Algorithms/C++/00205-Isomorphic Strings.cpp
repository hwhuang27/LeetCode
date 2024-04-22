class Solution {
public:
    bool isIsomorphic(string s, string t) {
        std::unordered_map<char, char> sMap;
        std::unordered_map<char, char> tMap;

        for(int i{0}; i < s.size(); i++){
            if(sMap.contains(s[i]) && sMap[s[i]] != t[i]){
                return false;
            } else if(tMap.contains(t[i]) && tMap[t[i]] != s[i]){
                return false;
            } else{
                sMap[s[i]] = t[i];
                tMap[t[i]] = s[i];
            }
        }

        return true;
    }
};

/*
    tc: O(n)
    sc: O(n)

    e -> a
    g -> d
    ------
    a -> e
    d -> g

    f -> b
    o -> a
    o -> r
    -----
    b -> f
    a -> o
    r -> o

    return false if we find that an existing key already maps to a different char.

*/