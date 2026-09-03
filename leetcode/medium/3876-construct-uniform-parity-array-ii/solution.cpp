class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        if(nums1.size() == 1) return true;
        sort(nums1.begin(),nums1.end());
        int parity = nums1[0]%2;
        int odd = 0, even = 0;
        if(nums1[0]%2) odd++;
        else even++;
        for(int i = 1; i < nums1.size(); i++){
            if(nums1[i]%2 != parity ){
                if(parity == 0 && odd <1) return false;
                if(parity == 1 && odd < 1) return false;
            }
            if(nums1[i]%2) odd++;
            else even++;
        }
        return true;
    }
};
//1 2 3 4 5 