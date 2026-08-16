class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        int atime = arrivalTime.size();
        for(int i = 0; i < atime; i++ ){
            arrivalTime[i] %= period;
        }
        sort(arrivalTime.begin(),arrivalTime.end());
        sort(lights.begin(),lights.end());
        int i = 0, j = 0;
        while(i < lights.size() && j < atime){
            if(arrivalTime[j] < lights[i]){
                j++;
            }
            else i++;
        }
        int maxi = 0;
        for(int i = j ; i < atime; i++){
            maxi  = max(maxi,period - arrivalTime[i]);
        }
        return maxi ;
    }
};