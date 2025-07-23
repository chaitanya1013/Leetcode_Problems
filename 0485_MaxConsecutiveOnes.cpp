
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int currentOnes = 0;                 // current counting ones
        int maxCntOnes = 0;                  // Max count upto 
        for(int i=0;i<nums.size();i++){      // loop check for array 
            if(nums[i]==1){                  // if number is 1 then increase the current counting
                currentOnes++;
            }
            else{                            // if number is not 1 then return current counting is 0
                currentOnes = 0;
            }
            if(currentOnes>maxCntOnes){      // when current counting number is grater than max count then currentOnes will be maxCntOnes
                maxCntOnes = currentOnes;
            }
        }
        return maxCntOnes;
    }
};
