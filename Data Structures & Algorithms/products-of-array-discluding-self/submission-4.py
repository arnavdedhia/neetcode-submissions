class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        z = nums.count(0)
        if z >= 2:
            zeros = [0] * len(nums)
            return zeros
        elif z == 1:
            mul = 1
            ind = nums.index(0)
            for n in nums:
                if n != 0:
                    mul *= n
            zeros = [0] * len(nums)
            zeros[ind] = mul
            return zeros
        else:
            mul = 1
            for n in nums:
                mul *= n
            zeros = []
            for n in nums:
                zeros.append(mul // n)
            return zeros
        return [z]
        