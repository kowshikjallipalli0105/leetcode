class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<string>substring;
        for(auto &i:arr1){
            string s=to_string(i);
            for(int j=0;j<=s.length();j++){
                 substring.insert(s.substr(0,j));
            }
        }
        int count=0;
        for(auto &i:arr2){
            string s=to_string(i);
            for(int j=0;j<=s.length();j++){
                string str=s.substr(0,j);
                if(substring.contains(s.substr(0,j))){
                    int length=str.length();
                    count=max(count,length);
                }
            }
        }
        return count;
    }
};