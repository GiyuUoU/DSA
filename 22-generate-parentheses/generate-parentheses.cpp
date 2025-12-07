class Solution {
public:
    vector<string> result;

    void solve(int open, int close, int n, string current) {

        // If the string is complete
        if (open == n && close == n) {
            result.push_back(current);
            return;
        }

        // Add '(' if we still have left
        if (open < n) {
            solve(open + 1, close, n, current + "(");
        }

        // Add ')' only if closing can match an opening
        if (close < open) {
            solve(open, close + 1, n, current + ")");
        }
    }

    vector<string> generateParenthesis(int n) {
        solve(0, 0, n, "");
        return result;
    }
};
