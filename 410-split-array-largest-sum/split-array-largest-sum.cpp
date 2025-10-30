class Solution {
public:
    bool canSplit(vector<int>& nums, int k, long long maxSum) {
        long long currentSum = 0;
        int count = 1; // start with one subarray

        for (int num : nums) {
            if (currentSum + num > maxSum) {
                // Need to start a new subarray
                count++;
                currentSum = num;
                if (count > k) return false;
            } else {
                currentSum += num;
            }
        }
        return true;
    }

    int splitArray(vector<int>& nums, int k) {
        long long low = *max_element(nums.begin(), nums.end());
        long long high = accumulate(nums.begin(), nums.end(), 0LL);
        long long ans = high;

        while (low <= high) {
            long long mid = low + (high - low) / 2;

            if (canSplit(nums, k, mid)) {
                ans = mid;
                high = mid - 1; // try smaller max sum
            } else {
                low = mid + 1; // need bigger sum
            }
        }

        return ans;
    }
};
