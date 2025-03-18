class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int min = nums[0], max = nums[nums.size() - 1], count = 0;
        for (int i = 0; i < nums.size(); i++)
            if (nums[i] != min && nums[i] != max)
                count++;
        return count;
    }
};