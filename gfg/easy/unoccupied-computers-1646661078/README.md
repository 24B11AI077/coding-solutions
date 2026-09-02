# Unoccupied Computers

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

A cafe has n computers. The customer events are represented by a string s of uppercase English letters, where each distinct letter appears exactly twice:

- The first occurrence denotes the customer's arrival.
- The second occurrence denotes the customer's departure.

A customer is assigned a computer only if one is available at the time of arrival, otherwise the customer is rejected and does not use a computer.

Return the number of customers who could not be assigned a computer upon arrival.

 **Examples:** 

```
Input: n = 3, s = "GACCBDDBAGEE"
Output: 1
Explanation: Only D will not be able to get any computer. So the answer is 1.
```

```
Input: n = 1, s = "ABCBAC"
Output: 2
Explanation: B and C will not be able to get any computers. So the answer is 2.
```

 **Constraints:** 
1 ≤ n ≤ 26
1 ≤ |s| ≤ 52
s consists of uppercase English letters and each letter occurs exactly 2 times.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-02T03:57:36.348Z  

```cpp
class Solution {
  public:
    int solve(int n, string s) {
        // code here
        vector<bool> occupied(27,false);
        unordered_map<int,int> mp;
        int cnt = 0;
        for(int i = 0; i < s.size(); i++){
            mp[s[i]]++;
            if(mp[s[i]] == 1){
                if(n > 0 ){
                    n--;
                    occupied[s[i]-'A'] = true;
                }
                else {
                    cnt++;
                }
            }
            if(mp[s[i]] == 2){
                if(occupied[s[i]-'A'] == true){
                    n++;
                    occupied[s[i]-'A'] = false;
                }
            }
        }
        return cnt;
    }
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/unoccupied-computers-1646661078/1)