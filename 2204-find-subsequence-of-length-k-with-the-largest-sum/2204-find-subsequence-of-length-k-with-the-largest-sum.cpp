// METHOD 2

class Solution {
public:

    typedef pair<int,int>P;

    vector<int> maxSubsequence(vector<int>& nums, int k) {
        
        vector<int>ans_idx;
        priority_queue<P, vector<P>, greater<P>>pq; // min-heap
        for(int i=0; i<nums.size(); i++){
            pq.push({nums[i],i});
            if(pq.size() > k) pq.pop(); // pq me sirf k hi elements rahenge. TC = O(n*log(k) + (n-k)log(k));
        }

        for(int i=1; i<=k; i++){
            ans_idx.push_back(pq.top().second);
            pq.pop(); // TC = klog(k);
        }

        sort(ans_idx.begin(), ans_idx.end());

        for(int i=0; i<ans_idx.size(); i++){
            ans_idx[i] = nums[ans_idx[i]];
        }

        return ans_idx;
    }

    // Total TC: O(n*log(k) + (n-k)log(k)) + klog(k);
};