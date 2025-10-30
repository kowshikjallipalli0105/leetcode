class Solution {
public:
    int maxRepeating(string s, string word) {
        int cnt =0;
        string temp = word;
        while(s.find(temp)!=string::npos){
            cnt++;
            temp+=word;
        }
        return cnt;
    }
};