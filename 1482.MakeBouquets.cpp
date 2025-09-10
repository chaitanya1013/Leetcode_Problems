class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long required_flowers = (long long)m * k;
        int n = bloomDay.size();

        if (required_flowers > n) {
            return -1;
        }

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            int bouquets = 0;
            int flowers = 0;
            for (int i = 0; i < n; i++) {
                if (bloomDay[i] <= mid) {
                    flowers++;
                    if (flowers == k) {
                        bouquets++;
                        flowers = 0;
                    }
                } else {
                    flowers = 0;
                }
            }

            if (bouquets >= m) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
