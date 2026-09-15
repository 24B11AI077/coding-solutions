class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.size();
        unordered_map<int,int> freq;
        for(int i = 0; i < n ; i++){
            freq[s[i]]++;
        }
        unordered_map<int,int> trac;
        int dis = 0,count = 0;
        int prev = -1;
        vector<int> res;
        for(int i = 0; i < n ; i++){
            trac[s[i]]++;
            if(trac[s[i]] == 1) dis++;
            if(trac[s[i]] == freq[s[i]]){
                count++;
            }
            if(dis == count){
                res.push_back(i-prev);
                prev = i;
                dis = 0;
                count = 0;
            }
        }
        
        return res;
    }
};
//a - 4
//b-3
//c-2
//d-2
//e-3
//f1
//g-1//h-2//i-2//j-2//k-1//l-1