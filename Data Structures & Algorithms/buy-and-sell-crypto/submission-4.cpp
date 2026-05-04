class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price =prices[0];
        int max_gain =0;
        for (int i=0;i<size(prices);i++){
            min_price = min(min_price,prices[i]);
            max_gain = max(max_gain, prices[i]-min_price);
        }
        return max_gain;
    }
};
