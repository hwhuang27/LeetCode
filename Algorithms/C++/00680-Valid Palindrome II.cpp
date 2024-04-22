class Solution {
public:
    bool validPalindrome(string s) {
        int l{0};
        int r = s.size()-1;

        char c1{0};
        char c2{0};
        while(l < r){
            if(s[l] != s[r]){
                c1 = s[l];
                c2 = s[r];
                break;
            }
            l++;
            r--;
        }

        if(c1 == 0 && c2 == 0) return true;

        // check valid if left char removed
        std::string leftRemoved = s;
        leftRemoved.erase(l, 1);
        std::string leftTemp = leftRemoved;
        std::reverse(leftRemoved.begin(), leftRemoved.end());
        if(leftRemoved == leftTemp) return true;

        // check valid if right char removed
        std::string rightRemoved = s;
        rightRemoved.erase(r, 1);
        std::string rightTemp = rightRemoved;
        std::reverse(rightRemoved.begin(), rightRemoved.end());
        if(rightRemoved == rightTemp) return true;

        return false;
    }
};

/*
    2 pointer 

    find the pair of characters that are DIFFERENT
    - remove left char, check if palidrome (reverse string)
    - OR remove right char, check if palidrome (reverse string)
    - if both fail, return false

*/