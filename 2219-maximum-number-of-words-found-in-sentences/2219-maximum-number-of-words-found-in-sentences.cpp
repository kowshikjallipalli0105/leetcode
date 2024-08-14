class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max_words=0;
        for(auto& sentence:sentences){
            int words=count(sentence.begin(),sentence.end(),' ')+1;
            max_words=max(words,max_words);
        }
        return max_words;
    }
};