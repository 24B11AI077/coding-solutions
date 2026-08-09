# Q1. Minimum Total Price After Applying Discounts

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given two integer arrays `prices` and `discounts`.

The value `prices[i]` represents the price of the `ith` item, and `discounts[j]` represents a discount percentage.

You may apply discounts subject to the following rules:

- Each discount can be applied to at most one item.
- Each item can receive at most one discount.
- An item may also receive no discount.

If a discount of `d` percent is applied to an item with price `p`, its final price becomes `(p * (100 - d)) / 100`. The final price is  **not**  rounded.

Return the  **minimum**  possible sum of final prices after assigning discounts optimally. Answers within `10-5` of the actual answer will be accepted.

 

 **Example 1:** 

 **Input:**  prices = [10,30,21], discounts = [50,60]

 **Output:**  32.50000

 **Explanation:** 

- Apply discounts[1] = 60 to prices[1] = 30, thus 30 * (100 - 60) / 100 = 12.
- Apply discounts[0] = 50 to prices[2] = 21, thus 21 * (100 - 50) / 100 = 10.5.
- prices[0] = 10 receives no discount, so it stays 10.

The total is `12 + 10.5 + 10 = 32.50000`, which is the minimum possible.

 **Example 2:** 

 **Input:**  prices = [100,70], discounts = [10,40,50]

 **Output:**  92.00000

 **Explanation:** ​​​​​​​

- Apply discounts[2] = 50 to prices[0] = 100, thus 100 * (100 - 50) / 100 = 50.
- Apply discounts[1] = 40 to prices[1] = 70, thus 70 * (100 - 40) / 100 = 42.

The total is `50 + 42 = 92.00000`, which is the minimum possible.

 **Example 3:** 

 **Input:**  prices = [7,3,9], discounts = [100,100]

 **Output:**  3.00000

 **Explanation:** 

- Apply discounts[0] = 100 to prices[2] = 9, thus 9 * (100 - 100) / 100 = 0.
- Apply discounts[1] = 100 to prices[0] = 7, thus 7 * (100 - 100) / 100 = 0.
- prices[1] = 3 receives no discount, so it stays 3.

The total is `0 + 0 + 3 = 3.00000`, which is the minimum possible.

 

 **Constraints:** 

- 1 <= prices.length, discounts.length <= 105
- 1 <= prices[i] <= 105
- 1 <= discounts[j] <= 100

## Solution

**Language:** C++  
**Runtime:** 1828 ms (beats 8.33%)  
**Memory:** 223.6 MB (beats 100.00%)  
**Submitted:** 2026-08-09T02:40:58.799Z  

```cpp
class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(),prices.end());
        sort(discounts.begin(),discounts.end());
        double sum = 0;
        int r = discounts.size()-1;
        for(int i = prices.size()-1; i >= 0; i--){
            if(r >= 0){
                double fprice = (double)(prices[i]*(100-discounts[r]))/100;
                cout << fprice << " ";
                sum += fprice;
            }
            else sum += prices[i];
            r--;
        }
        return sum;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/minimum-total-price-after-applying-discounts/)