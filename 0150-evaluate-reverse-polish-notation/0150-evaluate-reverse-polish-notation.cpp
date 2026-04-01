class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> st;

        for (string &t : tokens) {
            // if operator, pop two numbers
            if (t == "+" || t == "-" || t == "*" || t == "/") {
                long long b = st.top(); st.pop();
                long long a = st.top(); st.pop();

                if (t == "+") st.push(a + b);
                else if (t == "-") st.push(a - b);
                else if (t == "*") st.push(a * b);
                else st.push(a / b);  // truncate toward zero
            }
            else {
                // convert operand string to integer
                st.push(stoll(t));
            }
        }
        return st.top();
    }
};