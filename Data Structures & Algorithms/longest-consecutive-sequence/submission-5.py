class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if len(nums) == 0:
            return 0
        number = dict()
        for n in nums:
            if not n in number:
                a = n + 1
                if n - 1 in number:
                    number[n] = number[n - 1] + 1
                else:
                    number[n] = 1
                if a in number:
                    while a in number:
                        number[a] = number[a - 1] + 1
                        a += 1
        return max(number.values())
                    