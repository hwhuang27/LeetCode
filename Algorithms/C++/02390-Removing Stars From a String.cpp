class Solution {
public:
    string removeStars(string s) {
        std::deque<char> dq;

        // build answer with deque
        for(int i{0}; i < s.size(); i++){
            if(s[i] != '*'){
                dq.push_back(s[i]);
            } else{
                dq.pop_back();
            }
        }

        // build result string from deque
        std::string result = "";
        while(!dq.empty()){
            result += dq.front();
            dq.pop_front();
        }

        return result;
    }
};

/*
    tc: O(n)
    sc: O(n)

    deque
    s = "leet**cod*e"
    [l e c o e]

*/