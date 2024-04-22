class Solution {
public:
    int arrangeCoins(int n) {
        int coins{1};
        int row{0};
        while(n > 0){
            row++;
            n -= coins;
            coins++;
        }
        return n == 0 ? row : row-1; 
    }
};

/*
    binary search on right subarray
    [1,2,3,4,5]

    5/2
    2/2
    1

    tc: O(n)
    sc: O(1)

    total = 6
    curr = 1
    row = 0

    row 1: 5 - 1 = 4
    row 2: 4 - 2 = 2
    row 3: 2 - 3 = 0 -> return 3

    return 2 
*/