class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        vector<int>res;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0) cnt++;
        }
        for(int i=0;i<cnt;i++){
            res.push_back(0);
        }
        for(int i=cnt;i<n;i++){
            res.push_back(1);
        }
        return res;
    }
};