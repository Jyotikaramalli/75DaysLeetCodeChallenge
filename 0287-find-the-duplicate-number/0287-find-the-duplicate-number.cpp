class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        int c;
        for(int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        for(auto val : mp)
        {
            if(val.second > 1)
            {
                c = val.first;
            }
        }
        return c;
    }
};