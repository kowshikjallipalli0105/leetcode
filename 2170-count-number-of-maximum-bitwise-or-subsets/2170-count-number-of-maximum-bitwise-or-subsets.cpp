class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum|=nums[i];
        }
        int total=1<<n;
        int sub=0;
        for(int i=0;i<total;i++){
            int curr=0;
            for(int j=0;j<n;j++){
                if(((i>>j)&1)==1){
                    curr|=nums[j];
                }
            }
            if(curr==sum){
                sub++;
            }
        }
        return sub;
    }
};