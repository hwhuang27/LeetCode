class Solution {
public:
    int lengthOfLastWord(string s) {
        int r = s.size() - 1;

        while(r >= 0){
            if(s[r] == ' ') r--;
            else break;
        }

        int count{0};
        while(r >= 0){
            if(s[r] != ' '){
                count++;
                r--;
            } else{
                break;
            }
        }

        return count;
    }
};