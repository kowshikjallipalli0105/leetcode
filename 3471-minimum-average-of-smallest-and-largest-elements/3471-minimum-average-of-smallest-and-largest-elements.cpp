class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double>avg;
        double a=0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            a=(nums[i]+nums[n-i-1])/2.0;
            avg.push_back(a);
        }
        double mini=*min_element(avg.begin(),avg.end());
        return mini;
        
    }
};