class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int left =  xCenter - radius;
        int right = xCenter + radius;
        int top = yCenter + radius;
        int bottom = yCenter - radius;
        if(x1 >= right || x2 <= left || top <= y1 || bottom >= y2 ) return false;
        return true;
    }
};