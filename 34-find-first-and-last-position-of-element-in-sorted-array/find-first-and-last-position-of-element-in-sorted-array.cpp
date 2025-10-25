class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0, right = n - 1;
        int midIndex = -1;
        
        // Step 1: Find any index of target using binary search
        while(left <= right) {
            int mid = left + (right - left) / 2;
            if(nums[mid] == target) {
                midIndex = mid;
                break;
            }
            else if(nums[mid] < target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        
        // If target not found, return [-1, -1]
        if(midIndex == -1) return {-1, -1};
        
        // Step 2: Binary search for the first (leftmost) position
        int first = midIndex;
        left = 0, right = midIndex;
        while(left <= right) {
            int mid = left + (right - left) / 2;
            if(nums[mid] == target) {
                first = mid;
                right = mid - 1; // keep going left
            } else {
                left = mid + 1;
            }
        }
        
        // Step 3: Binary search for the last (rightmost) position
        int last = midIndex;
        left = midIndex, right = n - 1;
        while(left <= right) {
            int mid = left + (right - left) / 2;
            if(nums[mid] == target) {
                last = mid;
                left = mid + 1; // keep going right
            } else {
                right = mid - 1;
            }
        }
        
        return {first, last};
    }
};
