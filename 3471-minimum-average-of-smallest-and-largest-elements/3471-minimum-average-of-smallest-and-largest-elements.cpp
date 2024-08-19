class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double>avg;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int left=0;
        int right=n-1;
        for(int i=0;i<n;i++){
            int temp1=nums[left];
            int temp2=nums[right];
            double a=(temp1+temp2)/2.0;
            avg.push_back(a);
            left++;
            right--;
        }
        double mini=*min_element(avg.begin(),avg.end());
        return mini;
        
    }
};