class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int mindiff=INT_MAX;
        if(nums.size()<2) return 0;
        for(int i=0;i<=n-k;i++){
            int diff= nums[i+k-1]-nums[i];
            mindiff=min(mindiff,diff);



        }
        return mindiff;
    }
};