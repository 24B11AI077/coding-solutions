class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
       vector<int> prefix(arr.size());
        int sum = 0;
        for(int i = 0; i < arr.size(); i++){
            sum += arr[i];
            prefix[i] =  sum;
        }
        unordered_map<int,int> mp;
        mp[k] = 0;
        mp[0] = 1;
        int zeroes = 0;
        for(int i = 0; i < prefix.size(); i++ ){
            if(mp.find(prefix[i]-k) != mp.end()){
                int cpy = k;
                cout << prefix[i]  << " ";
                zeroes += mp[prefix[i]-k];
                
                 
            }
             if(mp.find(prefix[i]) != mp.end()){
                mp[prefix[i]] +=1;
            }
            else mp[prefix[i]] = 1;
        }
        return zeroes;
    }
};