class Solution {
public:
    bool search(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int low=0;
        int high=n-1;
        int mid=0;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]==target){
                return true;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }

        }
        return false;
    }
};