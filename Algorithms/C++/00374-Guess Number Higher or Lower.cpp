/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int start{1};
        int end{n};
        while(start <= end){
            int mid = start + (end - start)/2;
            int myGuess = guess(mid);
            if(myGuess == 1){
                start = mid+1;
            } else if(myGuess == -1){
                end = mid-1;
            } else{
                return mid;
            }
        }

        return -1;
    }
};

/*
    mid < target : 1
    mid > target : 1
    mid == target : 0

    [1,2,3,4,5]

    mid = (start+end)/2
    if(mid > target){
        start = mid+1
    } else if(mid < target){
        end = mid-1
    }
*/