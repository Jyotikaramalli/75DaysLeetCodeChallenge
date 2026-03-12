class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
    vector<int> m;
    
    for(int a=0;a<n;a++)
    {
        
        for(int b=a+1;b<n;b++)
        {
        if(nums[a]+nums[b]==target)
        {
           m.push_back(a);
           m.push_back(b);
           return m;
        }
        }
    }
    return m;
    }
     
};