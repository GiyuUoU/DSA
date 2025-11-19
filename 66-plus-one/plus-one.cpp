class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        // Start from the last digit
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;   // just add 1
                return digits; // no carry, return
            }
            digits[i] = 0;  // if 9 → turn into 0 and continue
        }
        
        // If all digits were 9, e.g. 999 -> 1000
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
