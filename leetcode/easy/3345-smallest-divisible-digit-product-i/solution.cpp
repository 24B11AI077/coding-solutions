class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i = n ; i <= 200 ; i++){
            int cpy = i ; 
            int pro = 1;
            while(cpy > 0){
                int r = cpy % 10;
                pro *= r;
                cpy /= 10;
            }
            if(pro % t == 0) return i;
        }
        return 1;
    }
};