class Solution {
public:
    int minBishopMoves(vector<int>& source, vector<int>& target) {
        int first = source[0]+source[1];
        int second = target[0]+target[1];
        if(first%2 != second%2) return -1;
        int sr = source[0];
        int sc = source[1];
        if(sr > target[0]){
            while(sr >= 1 && sc <= 8){
                sr--;
                sc++;
                if(sr == target[0] && sc == target[1]) return 1;
            }
            sr = source[0];
            sc = source[1];
            while(sr >= 1 && sc >= 1){
                sr--;sc--;
                if(sr == target[0] && sc == target[1]) return 1;
            }
        }
        else {
            sr = source[0];sc = source[1];
            while(sr <= 8 && sc >= 1){
                sr++;
                sc--;
                if(sr == target[0] && sc == target[1]) return 1;
            }
            sr = source[0];
            sc = source[1];
            while(sr <= 8 && sc <= 8){
                sr++;sc++;
                if(sr == target[0] && sc == target[1]) return 1;
            }
        }
        return 2;
    }
};