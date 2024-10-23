import java.util.List;

class Solution {
    public int diagonalSum(int[][] mat) {
        int row = 0;
        int result = 0;

        for (int[] vec : mat) {
            result += vec[row];
            if (row != vec.length - row - 1) {
                result += vec[vec.length - row - 1];
            }
            row++;
        }

        return result;
    }
}

