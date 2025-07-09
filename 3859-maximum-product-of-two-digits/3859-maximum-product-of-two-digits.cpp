class Solution {
public:
    int maxProduct(int n) {
        vector<int>individualnumbers;
        while(n>0){
            int digit = n%10;
            individualnumbers.push_back(digit);
            n /= 10;
        }
        sort(individualnumbers.begin(),individualnumbers.end());
        int t = individualnumbers.size();
    return individualnumbers[t-1]*individualnumbers[t-2];
    }
};