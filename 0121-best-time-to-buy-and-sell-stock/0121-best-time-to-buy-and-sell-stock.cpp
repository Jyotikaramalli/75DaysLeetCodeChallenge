class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bb = prices[0];
    int max_prof = 0;
    for(int i = 1; i < prices.size(); i++)
    {
        if(prices[i] < bb)
        bb = prices[i];
        max_prof = max(max_prof, prices[i]-bb);
    }
    return max_prof;
    }
};