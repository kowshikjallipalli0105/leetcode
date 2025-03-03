class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> less, equal, high;
        for (int num : nums) {
            if (num < pivot) 
                less.push_back(num);
            else if (num == pivot) 
                equal.push_back(num);
            else 
                high.push_back(num);
        }
        vector<int> result;
        result.insert(result.end(), less.begin(), less.end());
        result.insert(result.end(), equal.begin(), equal.end());
        result.insert(result.end(), high.begin(), high.end());

        return result;
    }
};
