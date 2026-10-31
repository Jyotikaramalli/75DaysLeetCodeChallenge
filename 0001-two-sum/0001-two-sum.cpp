class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        int j = i+1;
        vector<int> s;
        int sum=0;
        while(i < nums.size()-1)
        {
             if(j == nums.size())
    {
        i++;
        j = i + 1;
        continue;
    }

            sum = nums[i]+nums[j];
            if(sum == target)
            {
                s.push_back(i);
                s.push_back(j);
                return s;
            }
            j++;

           
        }
        return s;
    }
};