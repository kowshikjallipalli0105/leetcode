class Solution {
public:
    string largestGoodInteger(string num) {
        int n = num.size();
        string ans = "";
        int maxi = INT_MIN;
        for(int i=0;i+2<n;i++){
            if (num[i] == num[i+1] && num[i] == num[i+2]) {
                string cur = num.substr(i, 3);
                if (ans == "" || cur > ans) ans = cur;
            }
        }
        return ans;
    }
};