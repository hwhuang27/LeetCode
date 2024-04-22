class Solution {

/*
    tc: O(nlogn)
    sc: O(n)
*/
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int,int> map;
        std::priority_queue<std::vector<int>> maxHeap;
        std::vector<int> result;

        // O(n)
        for(int i{0}; i < nums.size(); i++){
            map[nums[i]] += 1;
        }

        // O(nlogn)
        for(const auto& [key, value] : map){
            // add pair into our maxHeap
            std::vector<int> pair;
            pair.push_back(value);
            pair.push_back(key);
            maxHeap.push(pair);     // O(logn) insertion
        }

        // O(k)
        for(int i{0}; i < k; i++){
            std::vector<int> pair = maxHeap.top();
            maxHeap.pop();
            result.push_back(pair[1]);
        }

        return result;
    }
};

/*
    hashmap + max heap

    1: 3
    2: 2
    3: 1


    (1, 3) pop
    (2, 2) pop 
    (3, 1)

    [1, 2]

    - first use hashmap to count occurences
    - use priority queue with pairs <num, count>
    - pop first k elements
    - push keys into result array

*/