class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> even, odd , ans;
        for(int i : nums){
            if(i%2==0) even.push_back(i);
            if(i%2!=0) odd.push_back(i);
        }
    
        for(int i =0;i< even.size();i++){
            ans.push_back(even[i]);
            ans.push_back(odd[i]);
        }
        return ans;
    }
};