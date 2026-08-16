# Min Product Subset

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array  **arr[]**, find the minimum possible product that can be obtained by multiplying the elements of any non-empty subset of the array.

 **Examples:** 

```
Input: arr[] = [1, 2, 3]
Output: 1
Explanation: The possible subset products are 1, 2, 3, 2, 3, 6, and 6. The minimum product is 1, obtained by selecting the subset [1].
```

```
Input: arr[] = [4, -2, 5]
Output: -40
Explanation: The minimum product is -40, obtained by selecting the subset [4, -2, 5].
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-16T05:14:28.384Z  

```cpp
class Solution {
  public:
    int minProd(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        int mini  =  arr[0];
        if(mini >= 0) return mini;
        int k = arr.size()-1;
        int pro  = 1;
        while(k >= 0 && arr[k] > 0){
            pro *= arr[k];
            k--;
        }
        if(arr[0] < 0) pro *= arr[0];
        int j = 1;
        int pro1 = 1;
        int cnt = 0;
        int temp =  1;
        while(j < arr.size() && arr[j] < 0){
            temp *= arr[j];
            if(cnt %2 != 0) pro1 =temp;
            cnt++;
            j++;
        }
        pro *= pro1;
        return pro;
    }
        
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/max-and-min-products3347/1)