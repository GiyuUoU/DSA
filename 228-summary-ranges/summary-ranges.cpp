class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();
        vector<string> result;

        for (int i = 0; i < n; i++) {
            int start = nums[i];

            // Move forward while the numbers are continuous
            while (i + 1 < n && nums[i + 1] == nums[i] + 1) {
                i++;
            }

            // If range contains more than one number
            if (start != nums[i]) {
                result.push_back(to_string(start) + "->" + to_string(nums[i]));
            }
            // Single number
            else {
                result.push_back(to_string(start));
            }
        }

        return result;
    }
};
