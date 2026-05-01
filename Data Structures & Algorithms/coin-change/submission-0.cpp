class Solution {
public:
    int min_coins;
    int coinChangedp(vector<int>& coins, int amount) {
        vector<int> dp(amount + 1, amount + 1);
        dp[0]=0;
        for(int a=1;a<=amount;a++){
            for(int coin: coins){
                if(a>=coin)
                    dp[a]= min(dp[a],1+dp[a-coin]);
            }
        }
        return (dp[amount] > amount) ? -1 : dp[amount];
    }
    
    
    void  bt(vector<int>& coins, int count, int amount)
    {
        if(amount==0) {
            min_coins=min(min_coins, count); 
            return;
        }
        if (count + 1 >= min_coins) {
            return ;
        }
        for(int coin: coins){
            if(coin <= amount){
                bt(coins,count+1,amount-coin);
            }
            else {
                break;
            }

        }
        return ;
    }
    
    int coinChangebt(vector<int>& coins, int amount) {
        min_coins = INT_MAX;
        
        bt(coins, 0 , amount);
        if (min_coins == INT_MAX) {
            return -1 ;
        } else {
             return min_coins;
        }
    }
    int coinChange(vector<int>& coins, int amount) {
        return coinChangedp(coins,amount);
    }
};
