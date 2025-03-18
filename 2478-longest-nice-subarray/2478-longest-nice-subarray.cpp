class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int left=0,bitMask=0,maxlen=0;
        for(int right=0;right<nums.size();right++) {
            while((bitMask&nums[right])!=0) {
                bitMask^=nums[left++];
            }
            bitMask|=nums[right];
            maxlen=max(maxlen,right-left+1);
        }
        return maxlen;
    }
};
