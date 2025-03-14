class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        long long total=0;
        for(int candy:candies) total+=candy;
        if(total<k)return 0;
        int lo=1,hi=*max_element(candies.begin(),candies.end()),ans=0;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            long long count=0;
            for(int candy:candies) count+=candy/mid;
            if(count>=k){ans=mid;lo=mid+1;}else hi=mid-1;
        }
        return ans;
    }
};
