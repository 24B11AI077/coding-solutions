class Solution {
public:
    int maxArea(vector<int>& height) {
    int left = 0, right = height.size()-1;
    int ans=0;
    while (left < right ){
        int ca = min(height[right],height[left])*(right-left);
        ans = max(ans,ca);
        height[left]<height[right]?left++:right--;
    } 
    return ans;
    }
};