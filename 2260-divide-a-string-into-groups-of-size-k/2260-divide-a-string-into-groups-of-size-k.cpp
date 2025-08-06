class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>str;
        int n = s.length();
        int rem = n%k;
        if(rem!=0){
            int need = k-rem;
            s+=string(need,fill);
        }
        for(int i=0;i<s.length();i+=k){
            str.push_back(s.substr(i,k));
        }
        return str;
    }
};