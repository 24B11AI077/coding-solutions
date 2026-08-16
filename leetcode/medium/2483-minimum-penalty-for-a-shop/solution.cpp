class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();
        vector<int> prefix(n);
        int cnt = 0;
        for(int i = 0; i < n ; i++){
            if(customers[i] == 'Y') cnt++;
            prefix[i] = cnt;
        }
        cnt = 0;
        int idx = 0;
        int mini = INT_MAX;
        for(int i = 0; i < n ; i++){
            
            int val = prefix[n-1]-prefix[i];
            if(customers[i] == 'Y') val++;
            if(mini > (val+cnt)){
                mini = val + cnt;
                idx = i;
            }
            if(customers[i] == 'N'){
                cnt++;
            }
        }
         if(mini > (cnt)){
                mini =cnt;
                idx = n;
            }
        return idx;
    }
};