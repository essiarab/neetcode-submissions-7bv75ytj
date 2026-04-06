class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int max_gain=0;
    int i,j;
    
    for(i=0;i<size(prices)-1;i++){
        int buy=prices[i];
        for(j=i+1;j<size(prices);j++)
        {
            int gain=prices[j]-buy;
            if(gain >max_gain){
                max_gain=gain;
            }
        }  
    }  
    return max(0,max_gain);
    }
};
