class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        int n = nums.size();
        vector<long long>prefix(n);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        vector<long long>suffixmin(n);
        suffixmin[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suffixmin[i] = min((long long)nums[i],suffixmin[i+1]);
            
        }
        long long maxscore= LLONG_MIN;
        for(int i=0;i<n-1;i++){
            long long score = prefix[i]-suffixmin[i+1];
            maxscore= max(maxscore,score);
        }
        return maxscore;
        
    }
};