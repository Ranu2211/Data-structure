class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_pro = prices[0];
        int max_pro = 0;
        for(int i=0;i<prices.size();i++){
            min_pro =min(min_pro,prices[i]);
            int profit = prices[i]-min_pro;
            max_pro= max(max_pro,profit);
        }
        return max_pro;
    }
};