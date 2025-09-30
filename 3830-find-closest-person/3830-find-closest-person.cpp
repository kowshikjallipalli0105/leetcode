class Solution {
public:
    int findClosest(int x, int y, int z) {
        int xtoz = abs(x-z);
        int ytoz = abs(y-z);
        if(xtoz<ytoz) return 1;
        else if(xtoz==ytoz) return 0;
        return 2;

    }
};