
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        int elmt;
        for (int i = 0; i < n; i++) {
            if (cnt == 0) {
                cnt = 1;
                elmt = nums[i];
            } else if (nums[i] == elmt) {
                cnt++;
            } else {
                cnt--;
            }
        }
        int cnt1 = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == elmt)
                cnt1++;
        }
        if (cnt1 > (nums.size() / 2))
            return elmt;
    return -1;
    }
};
