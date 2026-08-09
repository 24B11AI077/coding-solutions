class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(),prices.end());
        sort(discounts.begin(),discounts.end());
        double sum = 0;
        int r = discounts.size()-1;
        for(int i = prices.size()-1; i >= 0; i--){
            if(r >= 0){
                double fprice = (double)(prices[i]*(100-discounts[r]))/100;
                cout << fprice << " ";
                sum += fprice;
            }
            else sum += prices[i];
            r--;
        }
        return sum;
    }
};