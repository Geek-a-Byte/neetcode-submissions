class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        unique = set()
        for n in nums:
            unique.add(n)
        if len(unique) != len(nums):
            return True
        else:
            return False
         