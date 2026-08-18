# Koko Eating Bananas

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Koko loves to eat bananas. There are `n` piles of bananas, the `ith` pile has `piles[i]` bananas. The guards have gone and will come back in `h` hours.

Koko can decide her bananas-per-hour eating speed of `k`. Each hour, she chooses some pile of bananas and eats `k` bananas from that pile. If the pile has less than `k` bananas, she eats all of them instead and will not eat any more bananas during this hour.

Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

Return  *the minimum integer*  `k`  *such that she can eat all the bananas within*  `h`  *hours*.

 

 **Example 1:** 

```
Input: piles = [3,6,7,11], h = 8
Output: 4

```

 **Example 2:** 

```
Input: piles = [30,11,23,4,20], h = 5
Output: 30

```

 **Example 3:** 

```
Input: piles = [30,11,23,4,20], h = 6
Output: 23

```

 

 **Constraints:** 

- 1 <= piles.length <= 104
- piles.length <= h <= 109
- 1 <= piles[i] <= 109

## Solution

**Language:** C++  
**Runtime:** 11 ms (beats 35.07%)  
**Memory:** 22.9 MB (beats 56.16%)  
**Submitted:** 2026-08-18T10:28:44.524Z  

```cpp
class Solution {
public:
    bool isValid(vector<int> &piles,int mid,int h){
        if(mid == 0) return false;
        for(int i = 0; i < piles.size(); i++){
            int val = 0;
            if(piles[i]%mid == 0) val = piles[i]/mid;
            else val = (piles[i]/mid) + 1;
            if(val > h) return false;
            h-=val;
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 0, high = *max_element(piles.begin(),piles.end());
        int ans = 0;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(isValid(piles,mid,h)){
                ans = mid;
                high = mid-1;
            }
            else low = mid +1;
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/koko-eating-bananas/)