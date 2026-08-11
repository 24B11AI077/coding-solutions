class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = 0;
        int n = weights.size();
        int high = 0;
        for(auto val : weights){
            low = max(low,val);
            high += val;
        }
        
    
        while(low < high){
           int  mid = low + (high - low)/2 ;
             int curr = 0;
             int need = 1;
             for(auto w: weights){
                if(curr + w > mid){
                    curr = 0;
                    need++;
                }
                curr += w;
             }
             if(need > days) low = mid +1;
             else high = mid;
             
        }
       return low;
    }
};