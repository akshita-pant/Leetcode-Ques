class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimumPrice= INT_MAX;
        int maxProfit=0;
        for(int i=0; i< prices.size(); i++)
        {
            minimumPrice= min(minimumPrice, prices[i]);
            maxProfit= max(maxProfit, prices[i]-minimumPrice);
        }
        return maxProfit;
    }
};