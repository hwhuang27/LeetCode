class Solution {
public:
    int maxArea(vector<int>& height) {
        int l{0};
        int r = height.size() - 1;
        int area{0};
        while(l < r){
            int currArea = std::min(height[r], height[l]) * (r-l);
            area = std::max(area, currArea);

            if(height[l] < height[r]){
                l++;
            } else{
                r--;
            }
        }
        return area;
    }
};

/*
    O(n^2) 
    O(nlogn) - sorting 
    O(n) - 2 pointers, 

    maps sets stacks queues

    n logn



    height = min(8, 7) = 7
    width  = 8 - 1 = 7
    area = 49

    height = min(8, 8) = 8
    width  = 6 - 1 = 5
    area = 40

    starting at both ends - start and end

    keep an area variable 
     
    move the pointer with least height

*/