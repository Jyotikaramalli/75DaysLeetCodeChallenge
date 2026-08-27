class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> s;
        int l = m+n;
        int p = 0;
        for(int i = 0; i < m; i++)
        {
            s.push_back(nums1[i]);
        }
        for(int i = 0; i < n; i++)
        {
            s.push_back(nums2[i]);
        }
        sort(s.begin(), s.end());
        for(int i = 0; i < s.size(); i++)
        {
            nums1[i] = s[i];
        }
        
    }
};