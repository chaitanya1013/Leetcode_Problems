class Solution {
public:
    int minEatingSpeed(std::vector<int>& piles, int h) {
        int low = 1;
        int high = *std::max_element(piles.begin(), piles.end());
        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long time_needed = 0;

            for (int pile : piles) {
                time_needed += (pile + mid - 1) / mid; 
            }

            if (time_needed <= h) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};





