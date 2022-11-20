class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int min_buy = prices[0],sell,max_sell =INT_MIN;
        for(int i=0;i<prices.size();i++){
            min_buy = min(min_buy,prices[i]);
            //cout<<min_buy<<endl;
             sell = prices[i]-min_buy;
           // cout<<sell<<endl;
             max_sell = max(max_sell,sell);
           
        }
        
        return max_sell;
    }
};