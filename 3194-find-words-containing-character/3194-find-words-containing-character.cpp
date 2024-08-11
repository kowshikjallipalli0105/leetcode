class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
       std::vector<int> res;
        int index = 0;
        for (const auto& word : words) {
            if (word.find(x) != std::string::npos) {
                res.push_back(index);
            }
            index++;
        }
        return res;
    }
};