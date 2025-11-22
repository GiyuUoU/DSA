class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> seen;

        for (int i = 0; i < nums.size(); i++) {
            // If already in window → duplicate found
            if (seen.count(nums[i])) return true;

            seen.insert(nums[i]);

            // Maintain window of size k
            if (seen.size() > k) {
                seen.erase(nums[i - k]);  // remove element that slides out
            }
        }

        return false;
    }
};
