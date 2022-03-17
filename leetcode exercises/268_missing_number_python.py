class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        thisSum = sum(nums)
        actualSum = len(nums) * (len(nums) + 1) / 2
        missingNumber = actualSum - thisSum
        return int(missingNumber)