# FAOCU

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Anagram Occurrences

You are given two strings $S$ and $P$, consisting only of lowercase English letters.

A substring of $S$ is considered a match if it is an  **anagram**  of $P$. Two strings are anagrams if they contain the same characters with the same frequencies, possibly in a different order.

For example, `bca` and `abc` are anagrams.

Find all starting indices of substrings of $S$ that are anagrams of $P$.

The indices are  **0-based**.

### Input Format
- The first line contains the string $S$ — the string in which anagram occurrences are to be searched.
- The second line contains the string $P$ — the pattern whose anagrams are to be found in $S$.
### Output Format

Print all valid starting indices in  **increasing order**, separated by spaces.

If no such index exists, print `-1`.

### Constraints
- $1 \le |S| \le 10^5$
- $1 \le |P| \le |S|$
- $S$ and $P$ contain only lowercase English letters.
### Sample 1:
Input
Output

```
cbaebabacd
abc
```

```
0 6
```

### Explanation:

The substring starting at index $0$ is `cba`, which is an anagram of `abc`.

The substring starting at index $6$ is `bac`, which is also an anagram of `abc`.

Therefore, the required starting indices are `0 6`.

### Sample 2:
Input
Output

```
xyzzyxzyxzyxzyxyz
xyz
```

```
0 3 4 5 6 7 8 9 10 11 12 14
```

### Explanation:

Each listed index marks the beginning of a substring of length $3$ containing exactly one `x`, one `y`, and one `z`.

Therefore, all those substrings are anagrams of `xyz`.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-24T16:09:30.429Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    string s,p; cin >> s >> p;
    int k = p.size();
    unordered_map<int,int> mp;
    for(int i = 0; i < k ; i++){
        mp[s[i]]++;
    }
    for(int i = k; i < s.size(); i++){
        
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/FAOCU)