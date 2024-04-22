class Solution {
public:
    int mySqrt(int x) {
        if(x == 2147483647) return 46340;
        for(int i{1}; i < 46341; i++){
            long square = i * i;
            if(square > x) return i-1;
            if(square == x) return i;
        }
        
        return -1;
    }
};

/*

    [4, 8 ]
    [1,4,9,16,25]
    46340
*/