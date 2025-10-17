class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos, neg;
        
        // Separate positives and negatives
        for (int num : nums) {
            if (num > 0) pos.push_back(num);
            else neg.push_back(num);
        }

        // Merge alternatively
        vector<int> result(nums.size());
        int p = 0, n = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) result[i] = pos[p++];
            else result[i] = neg[n++];
        }
        
        return result;
    }
};
