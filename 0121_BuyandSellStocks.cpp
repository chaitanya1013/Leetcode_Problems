
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int buy=prices[0];
        for(int i=0;i<=prices.size()-1;i++){
            
            if(prices[i]-buy>profit){
                profit=prices[i]-buy;
            }
            if(prices[i]<buy){
                buy=prices[i];
            }
        }
        return profit;

    }
};
