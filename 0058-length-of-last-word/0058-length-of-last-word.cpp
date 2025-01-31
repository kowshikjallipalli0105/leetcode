class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=s.length()-1,c=0,cnt=0,j=len;
        while(s[j]==' '){
                cnt++;
                j--;
            }
        for(int i=len-cnt;i>=0;i--){
            
            if(s[i]!=' '){
                c++;
            }
            else{
                break;
            }

        }
        return c;
    }
};