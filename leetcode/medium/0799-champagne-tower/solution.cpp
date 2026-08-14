class Solution {
public:
    double champagneTower(int poured, int row, int query_glass) {
        if(poured == 0) return 0;
        if(poured == 1 && row == 0) return 1;
        if(poured == 1 && row > 0) return 0;
        int total_below = ((row+1)*(row+2))/2;
        int total_above = ((row+1)*(row))/2;
        if(poured > total_below) return 1;
        if(poured <= total_above) return 0;
        int rem = poured - (total_above);
        if(query_glass > 0 && query_glass < row){
            return ((double)rem/row);
        }
        
        double val = ((double)rem/(row*2));
        return val;
    }
};