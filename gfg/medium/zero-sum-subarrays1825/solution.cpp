class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        // code here
        vector<int> prefix(arr.size());
        int sum = 0;
        for(int i = 0; i < arr.size(); i++){
            sum += arr[i];
            prefix[i] =  sum;
        }
        unordered_map<int,int> mp;
        mp[0] = 1;
        int zeroes = 0;
        for(int i = 0; i < prefix.size(); i++ ){
            if(mp.find(prefix[i]) != mp.end()){
                zeroes += mp[prefix[i]];
            }
            else mp[prefix[i]] = 0;
            
            mp[prefix[i]] +=1;
        }
        return zeroes;
        
        }
};