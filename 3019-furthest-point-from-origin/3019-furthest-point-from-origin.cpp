class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int lans=0;
        int rans=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='_'){
                lans++;
                rans++;
            }
            else if(moves[i]=='R'){
                rans++;
                lans--;
            }
            else{
                lans++;
                rans--;
            }
        }
        return max(lans,rans);
    }
};