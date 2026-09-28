class Solution:
    def maxArea(self, heights: List[int]) -> int:
        left = 0
        right = len(heights) - 1
        tot = -1
        while left < right:
            l = heights[left]
            r = heights[right]
            cur = min(l, r) * (right - left)
            tot = max(tot, cur)
            if(l < r):
                left += 1
            else:
                right -= 1
        return tot