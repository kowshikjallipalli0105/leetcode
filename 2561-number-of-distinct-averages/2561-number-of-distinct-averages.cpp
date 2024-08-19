class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        set <double>distinct;
        int left=0;
        int right=nums.size()-1;
        sort(nums.begin(),nums.end());
        while(left<right){
            distinct.insert((nums[left]+nums[right])/2.0);
            left++;
            right--;
        }
        return distinct.size();

    }
};