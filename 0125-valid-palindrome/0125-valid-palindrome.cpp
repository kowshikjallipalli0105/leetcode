class Solution {
public:
    bool isPalindrome(string s) {
        string lower;
        for(auto i:s){
            if(isalnum(i)){
                lower+=tolower(i);
            }
        }
        int start=0;
        int end=lower.length()-1;
        while(start<=end){
            if(lower[start]!=lower[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};