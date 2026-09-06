class Solution {
public:
    int countRotations(string s, int k) {
        int size = s.size();
        int rot = 0;
        for(int i = 0; i < size; i++){
            string first = s.substr(0,i);
            string second = s.substr(i);
            string res = second + first;
            int cnt = 0;
            for(int j = 0; j < size-1; j++){
                if(res[j] == res[j+1]) cnt++;
            }
            if(cnt == k) rot++;
        }
        return rot ;
    }
};
//aabbcc k= 3
//abbcca
//bbccaa k = 3