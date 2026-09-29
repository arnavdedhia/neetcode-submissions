class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        profit = 0
        small = prices[0]
        big = prices[0]
        for p in prices:
            if p < small:
                profit = max(profit, big - small)
                big = -1
                small = p
            elif p > big:
                big = p
        return max(profit, big - small)