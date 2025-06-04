class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int>res,freq(n+1,0);
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        int n1=freq.size();
        for(int i=1;i<n1;i++){
            if(freq[i]==0) res.push_back(i);
        }
        return res;
    }
};