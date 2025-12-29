class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();

        // Pair: (score, original index)
        vector<pair<int, int>> athletes;
        for (int i = 0; i < n; i++) {
            athletes.push_back({score[i], i});
        }

        // Sort by score descending
        sort(athletes.begin(), athletes.end(), greater<>());

        vector<string> answer(n);

        for (int i = 0; i < n; i++) {
            if (i == 0) answer[athletes[i].second] = "Gold Medal";
            else if (i == 1) answer[athletes[i].second] = "Silver Medal";
            else if (i == 2) answer[athletes[i].second] = "Bronze Medal";
            else answer[athletes[i].second] = to_string(i + 1);
        }

        return answer;
    }
};
