class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_pro = prices[0];
        int maxpro = 0;
        for(int i=0;i<prices.size();i++){
            min_pro = min(min_pro,prices[i]);
            int profit = prices[i]-min_pro;
            maxpro = max(maxpro,profit);
        }
        return maxpro;
    }
};