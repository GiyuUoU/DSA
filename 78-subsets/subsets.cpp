class Solution {
public:
    void solve(int index, vector<int>& nums, vector<int>& current, vector<vector<int>>& result) {
        // base case: if index reaches end
        if(index == nums.size()) {
            result.push_back(current);
            return;
        }

        // OPTION 1: Exclude nums[index]
        solve(index + 1, nums, current, result);

        // OPTION 2: Include nums[index]
        current.push_back(nums[index]);
        solve(index + 1, nums, current, result);

        // backtrack
        current.pop_back();
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> current;
        solve(0, nums, current, result);
        return result;
    }
};
