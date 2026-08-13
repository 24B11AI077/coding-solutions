class Solution {
public:
    int reverse(int x) {
        bool n = false;
        if( x < 0) n = true;
        string s = to_string(x);
        std::reverse(s.begin(),s.end());
        string cpy = s;
        if(stoll(s) > 2147483647) return 0;
        if(n) return -1*stoi(s);
        return stoi(s);
    }
};