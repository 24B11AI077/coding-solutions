class Solution {
public:
    bool isValid(vector<int>& position, int mid,int m){
        int left = 0;
        for(int i = 0; i < position.size(); i++){
          if( i == 0){
            m--;
            left = i;
          }
          else {
            if(position[i]-position[left] >= mid){
                left = i;
                m--;
            }
          }
          if(m == 0) return true;
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        int n ; n = position.size();
        sort(position.begin(),position.end());
        if( m == 2) return (position[n-1]-position[0]);
        int left = 0, right = position[n-1]-position[0];
        int ans = position[n-1]-position[0];
        while(left <= right){
            int mid = left + (right - left) / 2;
            if(isValid(position,mid,m)){
                ans = mid;
                left = mid+1;
            }
            else {
                right = mid-1;
            }
        }
        return ans;
    }
};