class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        int l=0; int h=s.size()-1;
        while(l<h){
            if(s[l]!=s[h]) return false;
            l++;
            h--;
        }
        return true;
    }
};