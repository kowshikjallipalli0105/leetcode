class Solution {
public:
    int minAddToMakeValid(string s) {
        int op=0,cl=0;
        for(auto i:s){
            if(i=='('){
                op++;
            }
            else{
                op>0?op--:cl++;
            }
        }
        return op+cl;
    }
};