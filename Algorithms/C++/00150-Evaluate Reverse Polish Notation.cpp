class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> stack;

        for(int i{0}; i < tokens.size(); i++){
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/"){
                int a = stack.top();
                stack.pop();
                int b = stack.top();
                stack.pop();
                if(tokens[i] == "+") stack.push(a + b);
                else if(tokens[i] == "-") stack.push(b - a);
                else if(tokens[i] == "*") stack.push(a * b);
                else if(tokens[i] == "/") stack.push(b / a);
            } else{
                stack.push(std::stoi(tokens[i]));
            }
        }

        return stack.top();
    }
};

/*
    [4 13 5 / + ]
    [4 2 +]
    [6]

    [4 13 5]



    



*/