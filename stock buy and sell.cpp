class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,min_val=prices[0],max_val=prices[0];
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min_val){
                min_val=prices[i];
                max_val=prices[i];
            }
            if(prices[i]>max_val){
                max_val=prices[i];
            }
            profit=max(profit,max_val-min_val);
        }
        return profit;
    }
};