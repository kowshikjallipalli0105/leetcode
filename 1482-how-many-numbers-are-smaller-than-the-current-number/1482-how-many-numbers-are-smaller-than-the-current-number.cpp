class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        vector<int>res;
        int count=0;
        for(int i=0;i<n;i++){
            count=0;
            for(int j=0;j<n;j++){
                if(nums[i]>nums[j]){
                    count++;
                }

            }
            res.push_back(count);
        }
        return res; 
    }
};