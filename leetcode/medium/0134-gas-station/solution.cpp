class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int curr = 0;
        int idx = 0;
        int totalGas = 0, totalCost = 0;
        for(int i = 0; i < gas.size(); i++){
             curr += gas[i]-cost[i];
             if(curr < 0 ){
                curr = 0;
                idx = i+1;
             }
             totalGas += gas[i];
             totalCost += cost[i];
        }
        if(idx >= gas.size() || totalCost > totalGas) return -1;
        return idx ;
    }
};