class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> res(n,0);
        if( k == 0) return res;
        int i ;
        int cpy = k;
        int sum = 0;
        if(cpy > 0){
            i = 1;
            while(i < code.size() && cpy> 0){
            sum+=code[i];
            cpy--;
            i++;
            if(i == code.size()) i = 0;
        }

        int j = 1;
        int size = code.size();
        int k = 0;
        while(j < code.size() && size > 0){
            res[k++] = sum;
            sum -= code[j];j++;
            sum+= code[i];i++;
            if(i == code.size()) i =0 ;
            if(j == code.size()) j = 0;
            size--;
        }
        }
        else {
            i = n-1;
             while(i >= 0 && cpy < 0){
            sum+=code[i];
            cpy++;
            i--;
            if(i ==-1) i = n-1;
        }
        if(i+1 == n) i = 0;
        else i += 1; 

        cout << sum;
        int j = 0;
        int size = code.size();
        int k = 0;
        while(j < n && size > 0){
            res[k++] = sum;
            sum -= code[i];i++;
            sum+= code[j];j++;
            if(i == n) i =0 ;
            if(j == n) j =0;
            size--;
        }
        }
        
        return res;
    }
};