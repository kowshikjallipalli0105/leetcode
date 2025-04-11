class Solution {
public:
    bool symm(string num){
        int n=num.length();
        if(n%2!=0) return false;
        int fir=0,sec=0;
        int half=n/2;
        for(int i=0;i<half;i++){
            fir+=num[i]-'0';
        }
        for(int i=half;i<n;i++){
            sec+=num[i]-'0';
        }
        return fir==sec;

    }
    int countSymmetricIntegers(int low, int high) {
        int count=0;
        for(int i=low;i<=high;i++){
            string num=to_string(i);
            if(symm(num)) count++;
        }
        return count;
    }
};