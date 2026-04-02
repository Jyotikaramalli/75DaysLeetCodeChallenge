class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n, 0);
        stack<int> st;  // will store indices

        for (int i = 0; i < n; i++) {
            // while stack not empty and current temp is greater than previous
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                int idx = st.top();
                st.pop();
                ans[idx] = i - idx; // number of days to wait
            }
            st.push(i); // push current day index
        }

        return ans;
    }
};