class Solution {
public:
    int calPoints(vector<string>& operations) {
        std::stack<int> scores;

        for(const auto& op : operations){
            if(op == "+"){
                // add last 2 scores
                int first = scores.top();
                scores.pop();
                int second = scores.top();
                scores.push(first);
                scores.push(first + second);
            } else if(op == "D"){
                // double prev score
                int dub = scores.top() * 2;
                scores.push(dub);
            } else if(op == "C"){
                // remove prev score
                scores.pop();
            } else{
                // add integer to scores
                int score = std::stoi(op);
                scores.push(score);
            }
            // handle operations first
            // then handle integers last

        }
        int sum{0};
        while(!scores.empty()){
            sum += scores.top();
            scores.pop();
        }

        return sum;
    }
};

/*
    tc: O(n)
    sc: O(n)
*/