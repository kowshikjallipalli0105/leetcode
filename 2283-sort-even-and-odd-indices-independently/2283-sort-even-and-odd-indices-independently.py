class Solution(object):
    def sortEvenOdd(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        nums[::2],nums[1::2]=sorted(nums[::2]),sorted(nums[1::2])[::-1]
        return nums
        