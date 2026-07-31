# Flood Fill

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an image represented by an `m x n` grid of integers `image`, where `image[i][j]` represents the pixel value of the image. You are also given three integers `sr`, `sc`, and `color`. Your task is to perform a  **flood fill**  on the image starting from the pixel `image[sr][sc]`.

To perform a  **flood fill** :

- Begin with the starting pixel and change its color to color.
- Perform the same process for each pixel that is directly adjacent (pixels that share a side with the original pixel, either horizontally or vertically) and shares the same color as the starting pixel.
- Keep repeating this process by checking neighboring pixels of the updated pixels and modifying their color if it matches the original color of the starting pixel.
- The process stops when there are no more adjacent pixels of the original color to update.

Return the  **modified**  image after performing the flood fill.

 

 **Example 1:** 

 **Input:**  image = [[1,1,1],[1,1,0],[1,0,1]], sr = 1, sc = 1, color = 2

 **Output:**  [[2,2,2],[2,2,0],[2,0,1]]

 **Explanation:** 

From the center of the image with position `(sr, sc) = (1, 1)` (i.e., the red pixel), all pixels connected by a path of the same color as the starting pixel (i.e., the blue pixels) are colored with the new color.

Note the bottom corner is  **not**  colored 2, because it is not horizontally or vertically connected to the starting pixel.

 **Example 2:** 

 **Input:**  image = [[0,0,0],[0,0,0]], sr = 0, sc = 0, color = 0

 **Output:**  [[0,0,0],[0,0,0]]

 **Explanation:** 

The starting pixel is already colored with 0, which is the same as the target color. Therefore, no changes are made to the image.

 

 **Constraints:** 

- m == image.length
- n == image[i].length
- 1 <= m, n <= 50
- 0 <= image[i][j], color < 216
- 0 <= sr < m
- 0 <= sc < n

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 12.68%)  
**Memory:** 18.4 MB (beats 20.11%)  
**Submitted:** 2026-07-31T10:00:12.577Z  

```cpp
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if (image[sr][sc] == color)
    return image;
        int n = image.size();
        int m = image[0].size();
        queue<pair<int,int>> que;
        que.push({sr,sc});
        int original = image[sr][sc];
        vector<vector<bool>> visited(n,vector<bool> (m,false));
        while(!que.empty()){
            int i = que.front().first;
            int j = que.front().second;
            que.pop();
            image[i][j] = color;
            if((i+1) < n && j < m && image[i+1][j] == original && !visited[i+1][j]){
                que.push({i+1,j});
                visited[i+1][j] = true;
            }
             if((i-1) >= 0 && j < m && image[i-1][j] == original && visited[i-1][j] == false){
                que.push({i-1,j});visited[i-1][j] = true;
            }
             if((i) < n && (j+1) < m && image[i][j+1] == original && visited[i][j+1] == false){
                que.push({i,j+1});visited[i][j+1] = true;
            }
             if((i) < n && (j-1) >= 0 && image[i][j-1] == original && visited[i][j-1] == false){
                que.push({i,j-1});visited[i][j-1] = true;
            }
        }
        return image;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/flood-fill/)