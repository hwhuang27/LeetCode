class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        std::vector<int> result;
        std::deque<int> deque;
        for(int i{0}; i < asteroids.size(); i++){
            // add positive # into stack
            if(asteroids[i] > 0){
                deque.push_back(asteroids[i]);
            }
            // negative # with 2 cases (stack empty / not empty)
            if(asteroids[i] < 0){
                if(deque.empty()){
                    result.push_back(asteroids[i]);
                } else{
                    while(!deque.empty() && deque.back() < std::abs(asteroids[i])){
                        deque.pop_back();
                    }
                    if(deque.empty()){
                        result.push_back(asteroids[i]);
                    } else if(deque.back() == std::abs(asteroids[i])){
                        deque.pop_back();
                    }
                }
            }
        }

        while(!deque.empty()){
            result.push_back(deque.front());
            deque.pop_front();
        }

        return result;

    }
};

/*
    tc: O(n)
    sc: O(n)
    
    scan array from left to right
    push positive numbers into stack
    if stack is NOT empty and we see a negative number
    keep popping stack until we get a positive # greater than the negative # 

    if there is a stack at end of array, push remaining stack into result
    [25, 10, 5, 2,]


*/