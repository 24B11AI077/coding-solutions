# PRDEXC

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-07-29T15:08:58.061Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin >> t;
    while(t--){
        int x,y,p; cin >> x >> y >> p;
        int cnt = 0;
        while(x*y < p){
            if((x+1)*y >= (y+1)*x){
                x++;
            }
            else{
                y++;
            }
            cnt++;
        }
        cout << cnt << '\n';
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/PRDEXC)