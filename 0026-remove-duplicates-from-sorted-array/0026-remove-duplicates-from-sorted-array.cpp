class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        int n = nums.size();
        //sort(nums.begin(), nums.end());
        for(int i = 0; i < n; i++)
        {
            s.insert(nums[i]);
        }
        int i = 0;
        for(auto val : s)
        {
            nums[i] = val;
            i++;
        }
        return s.size();

    }
};