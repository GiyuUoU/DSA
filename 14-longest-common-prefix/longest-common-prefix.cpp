class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        // Step 1: Sort the array
        sort(strs.begin(), strs.end());

        // Step 2: Get the first and last strings
        string first = strs.front();
        string last = strs.back();

        // Step 3: Compare character by character
        string result = "";
        for (int i = 0; i < first.size() && i < last.size(); i++) {
            if (first[i] == last[i])
                result += first[i];
            else
                break;
        }

        return result;
    }
};