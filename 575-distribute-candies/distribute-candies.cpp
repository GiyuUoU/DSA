class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> uniqueTypes(candyType.begin(), candyType.end());
        int n = candyType.size();
          
        return min((int)uniqueTypes.size(), n / 2);
    }
};
