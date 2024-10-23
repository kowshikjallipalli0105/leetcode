class Solution {
    public int minimumSum(int[] nums) {
        int n=nums.length;
        int mini=Integer.MAX_VALUE;
        boolean flag=false;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i]<nums[j] && nums[k]<nums[j]){
                        int curr=nums[i]+nums[j]+nums[k];
                        mini=Math.min(curr,mini);
                        flag=true;
                    }
                }
            }
        }
        if(!flag) return -1;
        return mini;
    }
}