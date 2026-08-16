class Solution {
  public:
    int minProd(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        int mini  =  arr[0];
        if(mini >= 0) return mini;
        int k = arr.size()-1;
        int pro  = 1;
        while(k >= 0 && arr[k] > 0){
            pro *= arr[k];
            k--;
        }
        if(arr[0] < 0) pro *= arr[0];
        int j = 1;
        int pro1 = 1;
        int cnt = 0;
        int temp =  1;
        while(j < arr.size() && arr[j] < 0){
            temp *= arr[j];
            if(cnt %2 != 0) pro1 =temp;
            cnt++;
            j++;
        }
        pro *= pro1;
        return pro;
    }
        
};