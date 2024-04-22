class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stack;
        for(const auto& c : s){
            if(c == '(' || c == '{' || c == '['){
                stack.push(c);
                continue;
            }

            if(stack.empty()) return false;
            int top = stack.top();

            if(top == '(' && c == ')') stack.pop();
            else if(c == ')') stack.push(c);

            if(top == '{' && c == '}') stack.pop();
            else if(c == '}') stack.push(c);

            if(top == '[' && c == ']') stack.pop();
            else if(c == ']') stack.push(c);
           
        }

        return stack.empty();
    }
};

/*

    
    algorithm
    
    if we see a open bracket, we will push onto stack
    if we see a closed bracket (of same type) we will pop open bracket

    if string is valid, then stack should be empty

*/