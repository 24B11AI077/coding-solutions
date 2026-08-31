# MISMO

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Minimum Smoke

You are given $N$ mixtures arranged in a row. The $i$-th mixture has a color $A_i$, represented by an integer from $0$ to $99$.

Your goal is to combine all the mixtures into  **one mixture**.

In one operation, you may choose any two  **adjacent mixtures**  with colors $a$ and $b$ and mix them together. The two mixtures are replaced by a new mixture whose color is:

$(a+b)\bmod 100$

The operation produces $a \times b$ units of smoke.

After every operation, the newly formed mixture takes the place of the two mixtures that were combined, while the relative order of all other mixtures remains unchanged.

You must continue until only one mixture remains.

Since different orders of mixing may produce different amounts of smoke, find the  **minimum total amount of smoke**  that can be produced.

### Input Format

The first line contains an integer $N$ — the number of mixtures.

The second line contains $N$ space-separated integers $A_1,A_2,\ldots,A_N$ — the colors of the mixtures from left to right.

### Output Format

Print a single integer — the minimum total amount of smoke produced when combining all the mixtures into one.

### Constraints
- $1 \le N \le 100$
- $0 \le A_i \le 99$
### Sample 1:
Input
Output

```
4
25 50 75 10
```

```
4875
```

### Explanation:

One optimal way is to first mix the mixtures with colors `50` and `75`.

This produces $50 \times 75 = 3750$ units of smoke, and the resulting mixture has color $(50+75)\bmod100=25$.

The mixtures are now `25 25 10`.

Next, mix `25` and `10`, producing $25 \times 10=250$ units of smoke and a mixture of color `35`.

Finally, mix `25` and `35`, producing $25 \times 35=875$ units of smoke.

Therefore, the minimum total smoke is:

$3750+250+875=4875$

### Sample 2:
Input
Output

```
3
10 20 30
```

```
1100
```

### Explanation:

For the mixtures `10 20 30`, one optimal way is to first mix `10` and `20`.

This produces $10 \times 20=200$ units of smoke and a mixture of color `30`.

The remaining mixtures are `30 30`, which produce $30 \times 30=900$ units of smoke when mixed.

Therefore, the minimum total smoke is:

$200+900=1100$

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-31T14:22:15.639Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

}

```

---

[View on CodeChef](https://www.codechef.com/problems/MISMO)