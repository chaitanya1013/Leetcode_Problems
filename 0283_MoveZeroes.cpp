//Puts all non-zero values in front
//Fills rest with zeroes

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastNonZeroIndex = 0;

        // For Move all non zero elements are front
        for(int i=0;i<nums.size();i++){
            if(nums[i] != 0){
                nums[lastNonZeroIndex++] = nums[i];
            }
        }

        // Fill remaining positions with 0s
        for(int i = lastNonZeroIndex; i < nums.size();i++){
            nums[i] = 0;
        }

    }
};
