class Solution {
public:
    bool isPerfectSquare(int num) {
        
        for(int i{1}; i < 46341; i++){
            long square = i * i;
            if(num == square) return true;
            if(num < square) break;
        }

        return false;
    }
};

/*
    num = 14

    [1,2,3,4,5] 
    [1,4,9,16,25]

    check if num is less than, equal to, or greater than 
    O(n)
    O(1)

*/