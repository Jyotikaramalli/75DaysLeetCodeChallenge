class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int,int>> v;
        sort(nums.begin(),nums.end());
        int count=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
            {
                count++;
            }
            else
            {
                v.push_back({nums[i-1], count});
                 count=1;
            }
        }
        v.push_back({nums[nums.size()-1],count});
        sort(v.begin(),v.end(),[](pair<int,int>& a, pair<int,int>& b){
            return  a.second > b.second;
        });
        vector<int> result;
        for(int i=0;i<k;i++)
        {
            result.push_back(v[i].first);
        }
        return result;
    }
};