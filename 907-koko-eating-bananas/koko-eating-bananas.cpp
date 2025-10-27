class Solution {
public:
    bool canEatAll(vector<int>& piles, int h, int k) {
        long long hours = 0;
        for (int p : piles) {
            hours += (p + k - 1) / k; // same as ceil(p / k)
            if (hours > h) return false;
        }
        return hours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(), piles.end());
        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (canEatAll(piles, h, mid)) {
                ans = mid;
                high = mid - 1; // try to find smaller k
            } else {
                low = mid + 1; // need larger speed
            }
        }

        return ans;
    }
};
