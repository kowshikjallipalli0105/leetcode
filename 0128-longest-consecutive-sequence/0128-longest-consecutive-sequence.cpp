class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int cnt=1,maxcnt=1;
        if(n==0) return 0  ;
        for(int i=1;i<n;i++){
            if (nums[i] != nums[i - 1]) { // Skip duplicates
                if (nums[i] == nums[i - 1] + 1) {
                    cnt++; // Continue the sequence
                }
            else {
                maxcnt=max(cnt,maxcnt);
                cnt=1;
            }
            }
        }
        return max(maxcnt,cnt);
    }
};