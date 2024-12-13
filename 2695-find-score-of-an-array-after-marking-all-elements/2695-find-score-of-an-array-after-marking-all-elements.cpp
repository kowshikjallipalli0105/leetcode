class Solution {
public:
    long long findScore(vector<int>& nums) {
        int n = nums.size();
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;  

        
        for (int i = 0; i < n; i++) {
            minHeap.push({nums[i], i});
        }

        long long score = 0;

    
        while (!minHeap.empty()) {
            auto curr = minHeap.top();
            minHeap.pop();
            int num = curr.first;
            int idx = curr.second;

            if (nums[idx] != -1) { 
                score += num;
                nums[idx] = -1;
                if (idx > 0 && nums[idx - 1] != -1) {
                    nums[idx - 1] = -1;
                }
                if (idx < n - 1 && nums[idx + 1] != -1) {
                    nums[idx + 1] = -1; 
                }
            }
        }

        return score;
    }
};