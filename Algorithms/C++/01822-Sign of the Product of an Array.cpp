class Solution {
public:
    int arraySign(vector<int>& nums) {
        int sign = true;    // true is positive, false is negative

        for(const auto& num : nums){
            if(num == 0) return 0;

            if(num < 0) sign = !sign;
        }
        if(sign) return 1;
        return -1;

    }
};

/*
    tc: O(n)
    sc: O(1)

    boolean flag to track postive or negative
    if we see a zero, return 0




*/