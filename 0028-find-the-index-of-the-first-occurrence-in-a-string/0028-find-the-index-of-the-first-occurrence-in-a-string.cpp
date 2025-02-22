class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int req=needle.size();
        vector<string>str;
        for(int i=0;i<n;i++){
            str.push_back(haystack.substr(i,req));
        }
        int len=str.size();
        for(int i=0;i<len;i++){
            if(str[i]==needle){
                return i;
                break;
            }
        }
        return -1;
    }
};