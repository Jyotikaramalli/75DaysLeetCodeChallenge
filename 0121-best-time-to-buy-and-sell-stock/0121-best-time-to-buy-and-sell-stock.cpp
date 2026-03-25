class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxprof=0;
        int bb=prices[0];
        for(int i=1;i<n;i++)
        {
            if(bb<prices[i])
            {
                maxprof=max(maxprof,prices[i]-bb);
            }
            bb=min(bb,prices[i]);
        }
        return maxprof;
    }
};