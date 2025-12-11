class Solution {
public:
    vector<vector<int>> result;

    void backtrack(int index, vector<int>& nums,vector<int>& curr) {
        result.push_back(curr);

        for (int i = index; i < nums.size(); i++) {

            // Skip duplicates at the SAME level of recursion
            if (i > index && nums[i] == nums[i - 1])
                continue;

            curr.push_back(nums[i]);
            backtrack(i + 1, nums, curr);
            curr.pop_back(); // backtrack
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());   // important
        vector<int> curr;
        backtrack(0, nums, curr);
        return result;
    }
};
