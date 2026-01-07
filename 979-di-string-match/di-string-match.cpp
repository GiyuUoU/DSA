class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.length();
        int low = 0, high = n;
        vector<int> perm;

        for (char ch : s) {
            if (ch == 'I') {
                perm.push_back(low++);
            } else { // ch == 'D'
                perm.push_back(high--);
            }
        }

        // One number will be left
        perm.push_back(low); // or high (both are same here)

        return perm;
    }
};