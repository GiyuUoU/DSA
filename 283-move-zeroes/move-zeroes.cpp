class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp;

        // Step 1: Push all non-zero elements into temp
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                temp.push_back(nums[i]);
            }
        }

        // Step 2: Copy all non-zero elements back to nums
        int nz = temp.size();
        for (int i = 0; i < nz; i++) {
            nums[i] = temp[i];
        }

        // Step 3: Fill remaining positions with zeroes
        for (int i = nz; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};
