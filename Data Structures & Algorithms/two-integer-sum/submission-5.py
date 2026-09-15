class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        n = dict()
        i = 0
        for a in nums:
            if target - a in n:
                return [n[target - a], i]
            n[a] = i
            i += 1