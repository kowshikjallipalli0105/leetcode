class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        res.insert(res.end(),nums1.begin(),nums1.end());
        res.insert(res.end(),nums2.begin(),nums2.end());
        double ans;
        int n=res.size();
        sort(res.begin(),res.end());
        if(n%2==0){
            ans=(res[n/2]+res[n/2-1])/2.0;
        }
        else{
            ans=res[n/2];
        }
        return ans;
    }
};