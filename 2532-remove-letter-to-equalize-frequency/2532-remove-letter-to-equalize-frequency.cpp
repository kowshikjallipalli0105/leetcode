class Solution {
public:
    bool equalFrequency(string word) {
        vector<int>a(26);
        for(auto &i:word) a[i-'a']++;
        for(int i=0;i<26;i++){
            if(a[i]){
                a[i]--;
                int maxi=*max_element(a.begin(),a.end());
                bool check=true;
                for(int j=0;j<26;j++){
                    if(a[j]&& a[j]!=maxi) check=false;
                }
                if(check) return true;
                a[i]++;
            }

        }
        return false;
    }
};