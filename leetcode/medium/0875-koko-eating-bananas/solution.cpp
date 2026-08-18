class Solution {
public:
    bool isValid(vector<int> &piles,int mid,int h){
        if(mid == 0) return false;
        for(int i = 0; i < piles.size(); i++){
            int val = 0;
            if(piles[i]%mid == 0) val = piles[i]/mid;
            else val = (piles[i]/mid) + 1;
            if(val > h) return false;
            h-=val;
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 0, high = *max_element(piles.begin(),piles.end());
        int ans = 0;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(isValid(piles,mid,h)){
                ans = mid;
                high = mid-1;
            }
            else low = mid +1;
        }
        return ans;
    }
};