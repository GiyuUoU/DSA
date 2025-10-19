class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ls;
        map<int, int> mpp;
        int n = nums.size();
        int mini = n / 3;  // element must appear more than ⌊n/3⌋ times

        // Step 1: Count frequency of each number
        for (int i = 0; i < n; i++) {
            mpp[nums[i]]++;
        }

        // Step 2: Check which elements exceed n/3 frequency
        for (auto it : mpp) {
            if (it.second > mini) {
                ls.push_back(it.first);
            }
        }

        // Step 3: Sort result if needed (not mandatory)
        sort(ls.begin(), ls.end());

        return ls;
    }
};
