class Solution:
    @staticmethod
    def minflip(arr: List[int]) -> int:
        flips = 0
        left, right = 0, len(arr) - 1
        while left < right:
            if arr[left] != arr[right]:
                flips += 1
            left += 1
            right -= 1
        return flips
    def minFlips(self, grid: List[List[int]]) -> int:
        m=len(grid)
        n=len(grid[0])
        row_flips=sum(Solution.minflip(row) for row in grid)
        col_flips= sum(Solution.minflip([grid[i][j] for i in range(m)]) for j in range(n) )
        return min(row_flips,col_flips)