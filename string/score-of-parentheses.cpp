class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        st.push(0);

        for (char c : s) {

            if (c == '(') {
                // Enter a new level
                st.push(0);
            }
            else {
                // Score inside the current pair
                int inside = st.top();
                st.pop();

                // Calculate score of this pair
                int score;

                if (inside == 0) {
                    // ()
                    score = 1;
                }
                else {
                    // (A)
                    score = 2 * inside;
                }

                // Add this score to the previous level
                st.top() += score;
            }
        }

        return st.top();
    }
};