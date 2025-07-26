class Solution {
public:
    int titleToNumber(string col) {
        int res =0;
       for( char c:col){
        res=res*26+(c-'A'+1);
       }
       return res;
    }
};