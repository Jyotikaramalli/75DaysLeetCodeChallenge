class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> s;
        for(int i = 0; i < m; i++)
        {
          
            s.push_back(nums1[i]);
        } 
        for(int i = 0; i < n; i++)
        {
            nums1[m] = nums2[i];
            m++;
        }
        
        sort(nums1.begin(), nums1.end());
    }
};