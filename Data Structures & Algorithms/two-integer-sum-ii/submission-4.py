class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        num = dict()
        count = 1
        for n in numbers:
            if (target - n) in num:
                return [num[target - n], count]
            num[n] = count
            count += 1
        return []