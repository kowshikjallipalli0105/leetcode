class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>>st;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                // if(j>0 && nums[j]==nums[j+1]) continue;
                int k=j+1;
                int l=n-1;
                while(k<l){
                long long sum=nums[i]+nums[j];
                sum+=nums[k];
                sum+=nums[l];
                if(sum>target){
                    l--;
                }
                else if(sum<target){
                    k++;
                }
                else{
                    vector<int>temp={nums[i],nums[j],nums[k],nums[l]};
                    // res.push_back(temp);
                    st.insert(temp);
                    k++;
                    l--;
                    // while(k<l && nums[k]==nums[k-1]) k++;
                    // while(k<l && nums[l]==nums[l+1]) l--;
                }
                }
            }
        }
        vector<vector<int>>res(st.begin(),st.end());
        return res;
    }
};