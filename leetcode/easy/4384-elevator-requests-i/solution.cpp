class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int curr = 0;
        int time = 0;
        for(int i = 0; i < requests.size() ; i++){
            time += abs(requests[i]-curr);
                curr = requests[i];
        }
        return time;
    }
};