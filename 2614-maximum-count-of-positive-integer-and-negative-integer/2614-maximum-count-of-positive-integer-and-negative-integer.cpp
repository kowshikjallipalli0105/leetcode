class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int negindex=lower_bound(nums.begin(),nums.end(),0)-nums.begin();
        int posindex=lower_bound(nums.begin(),nums.end(),1)-nums.begin();
        return max(negindex,n-posindex);
        
    }
};