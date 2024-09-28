class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0,n=nums.size();
            int curr=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                curr++;
            }else if (nums[i]==0){
            // maxi=curr;
            curr=0;
            }
            if(curr>maxi){
                maxi=curr;
            }
        }
        // maxi=max(maxi,curr);
        return maxi;
    }
};