class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        i = 0
        j = 0
        prev = prices[i]
        profit = 0
        while i < len(prices) and j < len(prices):
            if prev > prices[j] :
                profit += (prev-prices[i])
                i = j
            prev = prices[j]
            j += 1
        if prev > prices[i]:
            profit += (prev-prices[i])
        return profit

                