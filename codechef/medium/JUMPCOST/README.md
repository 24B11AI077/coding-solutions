# JUMPCOST

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Jumping Cost

You have an array $A$ of $N$ elements.

You are currently at index $1$ with a balance of $0$, and you can do the following jump operation as many times as you want:

- Choose to jump from index $i$ to index $j$ ($i < j$), and add $(A_j - j + i)$ to your balance.

Find the maximum possible balance you can have at any point using these jump operations.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line contains a single integer $N$. The second line contains $N$ integers - $A_1, A_2, \ldots, A_N$.
### Output Format

For each test case, output on a new line the maximum balance you can have.

### Constraints
- $1 \le T \le 100$
- $2 \le N \le 100$
- $-100 \le A_i \le 100$
### Sample 1:
Input
Output

```
3
6
5 5 -1 5 -1 1
5
5 5 5 5 5
3
-4 -1 -5

```

```
7
16
0

```

### Explanation:

 **Test Case 1:**  Optimal is to jump from index $1$ to $2$ and then to $4$.

 **Test Case 3:**  Optimal is to not take any jumps at all.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-05T15:39:18.098Z  

```c_cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        int ans = 0;
        int sum = 0;

        for (int i = 2; i <= n; i++) {
            if (a[i] > 0)
                sum += a[i];

            ans = max(ans, 1 + sum - i);
        }

        cout << ans << "\n";
    }

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/JUMPCOST)