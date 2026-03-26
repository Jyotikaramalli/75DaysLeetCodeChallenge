class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int ws=0;
       
        double avg=0;
        for(int i=0;i<k;i++)
        {
            ws+=nums[i];
        }
         int max_sum=ws;
        for(int i=k;i<nums.size();i++)
        {
            ws=ws-nums[i-k]+nums[i];
            max_sum=max(max_sum, ws);
        }
        return (double)max_sum/k;
    
    }
};