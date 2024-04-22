class Solution {
public:
    int maxNumberOfBalloons(string text) {
        std::unordered_map<char, int> map{
            {'b', 0},
            {'a', 0},
            {'n', 0},
            {'l', 0},
            {'o', 0}
        };

        for(int i{0}; i < text.size(); i++){
            if(text[i] == 'b' || text[i] == 'a' || text[i] == 'l' || text[i] == 'o' || text[i] == 'n'){
                map[text[i]]++;
            }
        } 

        int maxBalloons{INT_MAX};
        for(const auto& [key, value] : map){
            if(key == 'b' || key == 'a' || key == 'n'){
                maxBalloons = std::min(maxBalloons, value);
            } else if(key == 'l' || key == 'o'){
                maxBalloons = std::min(maxBalloons, (value/2));
            }
        }
        if(maxBalloons == INT_MAX) return 0;
        return maxBalloons;
    }
};

/*
    in balloon:

    b: 1
    a: 1
    l: 2
    o: 2
    n: 1

    make an unordered map ONLY with these characters
    take the minimum of each char, with chars "l" and "o" divided by 2

    return minimum

*/