# Candy

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

There are `n` children standing in a line.

Each child is assigned a rating value given in the integer array `ratings`.

You are giving candies to these children subjected to the following requirements:

- Each child must have at least one candy.
- Children with a higher rating get more candies than their neighbors.

Return the  **minimum**  number of candies you need to have to distribute the candies to the children.

 

 **Example 1:** 

```
Input: ratings = [1,0,2]
Output: 5
Explanation: You can allocate to the first, second and third child with 2, 1, 2 candies respectively.

```

 **Example 2:** 

```
Input: ratings = [1,2,2]
Output: 4
Explanation: You can allocate to the first, second and third child with 1, 2, 1 candies respectively.
The third child gets 1 candy because it satisfies the above two conditions.

```

 

 **Constraints:** 

- 1 <= n == ratings.length <= 5 * 104
- 0 <= ratings[i] <= 5 * 104

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 47.02%)  
**Memory:** 71.2 MB (beats 37.67%)  
**Submitted:** 2026-09-16T08:46:32.860Z  

```cpp
class Solution {
public:
    int candy(vector<int>& ratings) {
        int size = ratings.size();
        vector<int> candies(size,1);
        for(int i = 1; i < size ; i++){
            if(ratings[i] > ratings[i-1]){
                candies[i] = candies[i-1]+1;
            }
        }
        for(int i = size -1 ; i > 0; i--){
            if(ratings[i-1] > ratings[i]){
                if(candies[i-1] <= candies[i]){
                    candies[i-1] = candies[i]+1;
                }
            }
        }
        int sum = 0;
        for(int val : candies){
            sum += val;
        }
        return sum ; 
    }
};


```

---

[View on LeetCode](https://leetcode.com/problems/candy/)