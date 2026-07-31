class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        vector<int> prefix(nums.size());
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            prefix[i] = sum;
        }
        vector<int> answer(queries.size());
        for(int i = 0; i < queries.size(); i++){
            int val = queries[i];
            int cnt = 0,k = 0;
            while(  k < prefix.size() && val >= prefix[k]){
                k++;
                cnt++;
            }
            answer[i] = cnt;
        }
        return answer;
    }
};