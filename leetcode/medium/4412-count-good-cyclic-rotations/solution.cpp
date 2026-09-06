class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int size = nums.size();
        long long sum1 = 0, sum2 = 0;
        for(int i = 0; i < size; i++){
            if(i < size/2 ){
                sum1 += nums[i];
            }
            else sum2 += nums[i];
        }
        int x1 = 0, x2 = size/2  ,y1 = size/2,y2 = 0;
        int cnt = 0;
        while(x1 < size ){
            if(sum1 > sum2) cnt++;
            sum1 -= nums[x1];sum1+= nums[x2];
            x1++,x2++;
            x2 = x2%size;
             sum2-= nums[y1];sum2+= nums[y2];
            y1++,y2++;
            y1 = y1%size;
        }
        return cnt;
    }
};