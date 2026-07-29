class Solution {
public:
    bool judgeSquareSum(int c) {
        for(int i = 0;i <= (2^32-1); i++ ){
            for(int j = 0;j <= (2^32-1); j++ ){
                cout << ((i*i)+(j*j)) << '\n';
                if(((i*i)+(j*j)) == c) {
                    return true;
                }
                if((i*i)+(j*j) > c) break;
            }
        }
        return false;
    }
};