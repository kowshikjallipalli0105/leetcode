class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        
     int maxi=0,n=nums.length;
            int curr=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                curr++;
            }else if (nums[i]==0){
            curr=0;
            }
            if(curr>maxi){
                maxi=curr;
            }
        }
        return maxi;
    }
}