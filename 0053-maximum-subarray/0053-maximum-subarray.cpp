class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = INT_MIN;
        int cs = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            cs += nums[i];
            max_sum = max(cs, max_sum);
            if(cs < 0)
            {
                cs = 0;
            }
            
            
        }
        return max_sum;
    }
};