class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }

    int atMost(vector<int>& nums, int goal) {
        if (goal < 0) return 0;
        int l = 0, cnt = 0, oddCount = 0;
        for (int r = 0; r < nums.size(); r++) {
            oddCount += nums[r] % 2; 

            while (oddCount > goal) {
                oddCount -= nums[l] % 2;
                l++;
            }
            cnt += (r - l + 1); 
        }
        return cnt;
    }
};
