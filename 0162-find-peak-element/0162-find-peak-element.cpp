class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n - 1;
        
        while (low < high) {
            int mid = low + (high - low) / 2;
            
            // Check the next element to avoid out-of-bounds error
            if (nums[mid] > nums[mid + 1]) {
                high = mid; // Peak is on the left (or could be the mid)
            } else {
                low = mid + 1; // Peak is on the right
            }
        }
        
        return low; // low will point to the peak element
    }
};
