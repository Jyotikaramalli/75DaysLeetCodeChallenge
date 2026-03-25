class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxpro=0;
        int bb=prices[0];
        for(int i=1;i<n;i++)
        {
            if(bb<prices[i])
            {
                maxpro=max(maxpro,prices[i]-bb);
            }
            bb=min(bb,prices[i]);
        }
        return maxpro;
    }
};