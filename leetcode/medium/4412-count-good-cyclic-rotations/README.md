# Q2. Count Good Cyclic Rotations

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an integer array `nums` of even length `n`.

A  **cyclic rotation**  of `nums` is obtained by choosing a prefix of `nums` whose length is between 0 and `n - 1` (inclusive), and moving it to the end of the array while preserving the order of all elements.

A cyclic rotation is  **good**  if the sum of its first `n / 2` elements is  **strictly greater**  than the sum of its last `n / 2` elements.

Return the number of cyclic rotations of `nums` that are good.

 

 **Example 1:** 

 **Input:**  nums = [1,2,3,4,5,6]

 **Output:**  3

 **Explanation:** 

The cyclic rotations of `nums` are:

Cyclic rotation	Sum of first `n / 2` elements	Sum of last `n / 2` elements
`[1, 2, 3, 4, 5, 6]`	`1 + 2 + 3 = 6`	`4 + 5 + 6 = 15`
`[2, 3, 4, 5, 6, 1]`	`2 + 3 + 4 = 9`	`5 + 6 + 1 = 12`
`[3, 4, 5, 6, 1, 2]`	`3 + 4 + 5 = 12`	`6 + 1 + 2 = 9`
`[4, 5, 6, 1, 2, 3]`	`4 + 5 + 6 = 15`	`1 + 2 + 3 = 6`
`[5, 6, 1, 2, 3, 4]`	`5 + 6 + 1 = 12`	`2 + 3 + 4 = 9`
`[6, 1, 2, 3, 4, 5]`	`6 + 1 + 2 = 9`	`3 + 4 + 5 = 12`

The first half has a greater sum than the second half for 3 rotations. Thus, the answer is 3.

 **Example 2:** 

 **Input:**  nums = [1,2,1,2]

 **Output:**  0

 **Explanation:** 

The cyclic rotations of `nums` are:

Cyclic rotation	Sum of first `n / 2` elements	Sum of last `n / 2` elements
`[1, 2, 1, 2]`	`1 + 2 = 3`	`1 + 2 = 3`
`[2, 1, 2, 1]`	`2 + 1 = 3`	`2 + 1 = 3`
`[1, 2, 1, 2]`	`1 + 2 = 3`	`1 + 2 = 3`
`[2, 1, 2, 1]`	`2 + 1 = 3`	`2 + 1 = 3`

No cyclic rotation is good because the two sums are equal for every rotation. Thus, the answer is 0.

 

 **Constraints:** 

- 2 <= n == nums.length <= 105
- 1 <= nums[i] <= 109
- n is even.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 103 MB (beats 96.59%)  
**Submitted:** 2026-09-06T13:09:20.317Z  

```cpp
class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int size = nums.size();
        long long sum1 = 0, sum2 = 0;
        for(int i = 0; i < size; i++){
            if(i < size/2 ){
                sum1 += nums[i];
            }
            else sum2 += nums[i];
        }
        int x1 = 0, x2 = size/2  ,y1 = size/2,y2 = 0;
        int cnt = 0;
        while(x1 < size ){
            if(sum1 > sum2) cnt++;
            sum1 -= nums[x1];sum1+= nums[x2];
            x1++,x2++;
            x2 = x2%size;
             sum2-= nums[y1];sum2+= nums[y2];
            y1++,y2++;
            y1 = y1%size;
        }
        return cnt;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/count-good-cyclic-rotations/)