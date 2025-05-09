class Solution:
    def sumOfEncryptedInt(self, nums: List[int]) -> int:
        result = 0
        
        for n in nums:
            str_n = str(n)
            len_str_n = len(str_n)

            largest_digit = max(list(str_n))
            result += int(str(largest_digit) * len_str_n)
     
     
        return result