class Solution {
public:
    string convertToTitle(int col) {
        string s = "";
        while(col>0){
            col--;
            int rem = col%26;
            char ch = 'A'+rem;
            s = ch+s;
            col/=26;
        }
        return s;
    }
};