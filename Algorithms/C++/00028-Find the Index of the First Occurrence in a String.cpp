class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size() > haystack.size()) return -1;

        int nSize = needle.size();
        int hSize = haystack.size();
        int count{0};
        for(int i{0}; i < hSize - nSize + 1; i++){
            std::string ss = haystack.substr(i, nSize);
            if(ss == needle) return i;
        }

        return -1;
    }
};

/*
    check all substrings in haystack with size of needle
*/