class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        int ops = 0;
        vector<int> answer(n);
        for(int i = 0; i < n; i++){
            int sum = 0;
            ops = 0;
            for(int j = 0; j < n ; j++){
                 if(boxes[j] == '1') ops += abs(j - i);
            }
            answer[i] = ops;
        }
        return answer;
    }
};