class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> s;
        // for(int i=0;i<2*n;i++)
        // {
        //     if(i<=n)
        //     {
        //     if(i<n && n%2==0)
        //     {
        //         s.push_back(nums[i]);
        //         s.push_back(nums[n+i]);
        //     }
        //     else
        //     {
        //         s.push_back(nums[i]);
        //         s.push_back(nums[n+i]);
        //     }
        //     }
            for(int i=0;i<n;i++)
            {
                s.push_back(nums[i]);
                s.push_back(nums[n+i]);

            }
        
        return s;
    }
};