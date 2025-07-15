class Solution {
public:
    bool isValid(string word) {
        if(word.length()<3) return false;
        string vowel = "aeiouAEIOU";
        int v=0,c=0;
        for(char& i:word){
            if(!isalnum(i)) return false;
            if(vowel.find(i)!=string::npos){
                v++;
            }else if(!isdigit(i)){
                c++;
            }
            
        }
        if(v==0 || c==0){
            return false;
        }
        return true;
    }
};