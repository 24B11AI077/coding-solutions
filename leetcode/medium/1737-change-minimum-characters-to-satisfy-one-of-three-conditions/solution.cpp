class Solution {
public:
    int minCharacters(string a, string b) {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int pos1 = 0 , pos2 = 0 ,pos3 = 0;
        int left = a.size()-1,right = b.size()-1;
        while( left >= 0 && a[left] >= b[0] ){
            left--;
        }
         pos1 = a.size()-1 - left;
        left = a.size()-1;right = b.size()-1;
         while(  right >= 0 && b[right] >= a[0] ){
           right--;
        }
         pos2 = b.size()-1-right;
        unordered_map<char,int> mp;
        int cnt = 0;
        bool found1 = false, found = false;
        int max1 = 0;
        char ch1 = '.';
        for(int i = 0; i < a.size(); i++){
            mp[a[i]]++;
            if(mp[a[i]] > max1){
                max1 = mp[a[i]];ch1 = a[i];
            }
        }int dis = 0;
        for(int i = 0; i < a.size() ; i++){
            if(a[i] != ch1) dis += 1;
        }
        unordered_map<char,int> mp1;
        int max2 = 0;char ch2 = '.';
        for(int i = 0; i < b.size(); i++){
            mp1[b[i]] += 1;
            if(mp1[b[i]] > max2){
                max2 = mp1[b[i]];ch2 = b[i];
            }
        }
        int dis2 = 0;
        for(int i = 0; i < b.size() ; i++){
            if(b[i] != ch2) dis2 +=1;
        }
        pos3 = dis+dis2;
        return min(pos1,min(pos2,pos3));
    }
};