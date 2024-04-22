class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size() == 0) return true;
        int sp{0};

        for(int tp{0}; tp < t.size(); tp++){
            if(s[sp] == t[tp]){
                sp++;
            }
            if(sp == s.size()) return true;
        }
        return false;
    }
};

/*
    tc: O(n)
    sc: O(1)
    2 pointers
    - iterate through t
    - if we see that t == s
    - then increment s pointer
    - return true if s reaches to the end
    - otherwise return false


*/