class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n = dist.size();
        vector<double> time(n);
        for(int i = 0; i < n ; i++){
            time[i] = (double)dist[i]/speed[i];
        }
        sort(time.begin(),time.end());
        double curr = 0;
        int cnt = 0;
        for(int i = 0; i < n ; i++){
            if(i == 0){
                cnt++;
                curr = 0;
            }
            else {
                if(curr + 1 < time[i]){
                    curr += 1;
                    cnt++;
                }
                else break;
            }
        }
        return cnt;
    }
};