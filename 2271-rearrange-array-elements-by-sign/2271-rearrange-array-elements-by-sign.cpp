class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>npos;
        vector<int>ppos;
        vector<int>numss;
        for(auto i:nums){
            if(i<0){
                npos.push_back(i);

            }
            else{
                ppos.push_back(i);
            }
        }
        for( int i=0;i<ppos.size();i++){
            numss.push_back(ppos[i]);
            numss.push_back(npos[i]);
        }
        return numss;
    }
};