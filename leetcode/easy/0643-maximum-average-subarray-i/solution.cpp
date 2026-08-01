class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double  maxi = INT_MIN;
        double sum = 0;
        for(int i = 0; i< k ; i++){
            sum += nums[i];
        }
        int i = 0;
        double avg = sum/k;
        maxi = max(maxi,avg);
        for(int j = k; j < nums.size(); j++){
            sum += nums[j];
           sum -= nums[i];
            avg = sum / k;
            maxi = max(maxi,avg);
            i++;
        }
        return maxi;
    }
};