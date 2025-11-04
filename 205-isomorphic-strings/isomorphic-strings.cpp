#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIsomorphic(const string& s, const string& t) {
        if (s.size() != t.size()) return false;
        // Using last-seen index trick with fixed 256-sized arrays for ASCII
        vector<int> lastS(256, -1), lastT(256, -1);
        for (int i = 0; i < (int)s.size(); ++i) {
            unsigned char cs = s[i];
            unsigned char ct = t[i];
            if (lastS[cs] != lastT[ct]) return false;
            lastS[cs] = lastT[ct] = i;
        }
        return true;
    }
};