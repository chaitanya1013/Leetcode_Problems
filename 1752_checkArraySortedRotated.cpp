
class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        // int n = nums.size();
        for(int i=0;i<nums.size();i++){
            int next = (i+1)%nums.size();
            if(nums[next]<nums[i]){
                count++;
            }
        }
        return count <= 1;
    }
};
