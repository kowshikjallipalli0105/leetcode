class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        set<vector<int>>st;
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
            int k=j+1;
            int l=n-1;
            while(k<l){
            long long sum= (long long )nums[i]+ (long long ) nums[j]+ (long long ) nums[k]+ (long long ) nums[l];
            if(sum==target){
                st.insert({nums[i],nums[j],nums[k],nums[l]});
                k++;
                l--;

            }
            else if(sum<target) k++;
            else l--;
            }
        }
        }
        for( auto i:st){
            res.push_back(i);
        }
        return res;
    }
};