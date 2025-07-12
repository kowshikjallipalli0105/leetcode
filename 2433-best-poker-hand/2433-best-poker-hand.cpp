class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        bool isFlush = true;
        for (int i = 1; i < 5; ++i) {
            if (suits[i] != suits[0]) {
                isFlush = false;
                break;
            }
        }
        if (isFlush) return "Flush";
        unordered_map<int, int> freq;
        for (int r : ranks) freq[r]++;

        for (auto& [_, count] : freq) {
            if (count >= 3) return "Three of a Kind";
        }

        for (auto& [_, count] : freq) {
            if (count == 2) return "Pair";
        }

        return "High Card";
    }
};
