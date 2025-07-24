class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0;  // Start pointer at beginning of array
        int right = nums.size() - 1;  // End pointer at last index
        vector<int> result(nums.size());  // Output array to store squares in sorted order

        // Loop from end to start because we'll place largest squares first
        for (int i = nums.size() - 1; i >= 0; i--) {
            // Compare absolute values of elements at left and right
            if (abs(nums[left]) > abs(nums[right])) {
                result[i] = nums[left] * nums[left];  // Square the left value
                left++;  // Move left pointer to the right
            } else {
                result[i] = nums[right] * nums[right];  // Square the right value
                right--;  // Move right pointer to the left
            }
        }

        return result;  // Return the final sorted squared array
    }
};
