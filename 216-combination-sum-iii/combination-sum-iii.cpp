class Solution {
public:
    vector<vector<int>> result;
    vector<int> path;

    void backtrack(int start, int k, int target) {
        // If combination size is k and sum is target
        if (k == 0 && target == 0) {
            result.push_back(path);
            return;
        }

        // Pruning
        if (k == 0 || target < 0) return;

        for (int i = start; i <= 9; i++) {
            path.push_back(i);
            backtrack(i + 1, k - 1, target - i);
            path.pop_back(); // backtrack
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        backtrack(1, k, n);
        return result;
    }
};
