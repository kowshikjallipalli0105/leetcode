class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int nu=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                nums[nu]=nums[i];
                nu++;
            }
        }
        return nu;
    }
};