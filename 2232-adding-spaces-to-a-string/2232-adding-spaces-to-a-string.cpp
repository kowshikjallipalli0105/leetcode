class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int slen=s.length();
        string ss;
        int space=0;
        for(int i=0;i<slen;i++){
            if(space<spaces.size() && i==spaces[space] ){
                ss+=" ";
                space++;
            }
            ss+=s[i];
        }
        return ss;
    }
};