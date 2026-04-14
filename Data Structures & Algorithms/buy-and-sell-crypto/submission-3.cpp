class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int max_gain=0;
    if (size(prices)==0) return 0;
    int min_price=prices[0];
    int i,j;
    
    for(i=0;i<size(prices);i++){
        min_price=min(min_price,prices[i]);
        max_gain=max(max_gain, prices[i]-min_price);
    }  
    return max_gain;
    }
};
