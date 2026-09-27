class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        ret = []
        nums.sort()
        for i, n in enumerate(nums):
            if i > 0 and n == nums[i - 1]:
                continue
            l = i + 1
            r = len(nums) - 1
            while l < r:
                three = n + nums[l] + nums[r]
                if(three > 0):
                    r -= 1
                elif(three < 0):
                    l += 1
                else:
                    ret.append([n, nums[l], nums[r]])
                    l += 1
                    while nums[l] == nums[l - 1] and l < r:
                        l += 1
            
        return ret