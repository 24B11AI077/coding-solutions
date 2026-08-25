class Solution:
    def missingMultiple(self, nums: List[int], k: int) -> int:
        nums.sort()
        val = k
        for num in nums :
            if num % k != 0 or val > num:
                continue
            if num != val:
                return val
            val += k
        
        return val