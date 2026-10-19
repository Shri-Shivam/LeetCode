class Solution {
public:
    unordered_set<string> ans;

    void dfs(string &s, int index, int leftRemove,
             int rightRemove, int balance, string current) {

        // End of string
        if (index == s.length()) {

            // All required removals must be used
            // and parentheses must be balanced
            if (leftRemove == 0 &&
                rightRemove == 0 &&
                balance == 0) {

                ans.insert(current);
            }

            return;
        }

        char ch = s[index];

        // -------------------------
        // CASE 1: Current char is '('
        // -------------------------
        if (ch == '(') {

            // Option 1: Remove '('
            if (leftRemove > 0) {
                dfs(s, index + 1,
                    leftRemove - 1,
                    rightRemove,
                    balance,
                    current);
            }

            // Option 2: Keep '('
            dfs(s, index + 1,
                leftRemove,
                rightRemove,
                balance + 1,
                current + ch);
        }

        // -------------------------
        // CASE 2: Current char is ')'
        // -------------------------
        else if (ch == ')') {

            // Option 1: Remove ')'
            if (rightRemove > 0) {
                dfs(s, index + 1,
                    leftRemove,
                    rightRemove - 1,
                    balance,
                    current);
            }

            // Option 2: Keep ')' only if
            // there is an '(' available
            if (balance > 0) {
                dfs(s, index + 1,
                    leftRemove,
                    rightRemove,
                    balance - 1,
                    current + ch);
            }
        }

        // -------------------------
        // CASE 3: Letter
        // -------------------------
        else {

            dfs(s, index + 1,
                leftRemove,
                rightRemove,
                balance,
                current + ch);
        }
    }

    vector<string> removeInvalidParentheses(string s) {

        int leftRemove = 0;
        int rightRemove = 0;
        int balance = 0;

        // Find minimum number of '(' and ')' to remove
        for (char ch : s) {

            if (ch == '(') {
                balance++;
            }
            else if (ch == ')') {

                if (balance > 0)
                    balance--;
                else
                    rightRemove++;
            }
        }

        // Remaining unmatched '(' need to be removed
        leftRemove = balance;

        dfs(s, 0, leftRemove, rightRemove, 0, "");

        return vector<string>(ans.begin(), ans.end());
    }
};