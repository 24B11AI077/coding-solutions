class Solution {
public:
    int numOfSubarrays(vector<int>& nums, int k, int threshold) {
         
        int sum = 0;
        for(int i = 0; i< k ; i++){
            sum += nums[i];
        }
        int i = 0;
        int avg = sum/k;
        int cnt = 0;
        if(avg >= threshold) cnt++;
        for(int j = k; j < nums.size(); j++){
            sum += nums[j];
           sum -= nums[i];
            avg = sum / k;
            if(avg >= threshold) cnt++;
            i++;
        }
        return cnt;
    }
};