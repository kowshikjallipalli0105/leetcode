class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        if(k<=numOnes+numZeros){
            return min(numOnes,k);
        }
        return numOnes-(k-numOnes-numZeros);
    }
};