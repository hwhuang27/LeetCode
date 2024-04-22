class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int p1{0};
        int p2{0};
        std::vector<char> res;
        while(p1 < word1.size() || p2 < word2.size()){
            if(p1 < word1.size()) res.push_back(word1[p1]);
            if(p2 < word2.size()) res.push_back(word2[p2]);
            p1++;
            p2++;
        }

        // change result char array into string
        return std::string(res.begin(), res.end());
    }
};

/*
    2 pointers
*/