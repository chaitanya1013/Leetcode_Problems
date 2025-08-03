class Solution {
public:
    int addDigits(int num) {
        for (; num >= 10; ) {
            int sum = 0;
            for (int n = num; n > 0; n /= 10) {
                sum += n % 10; 
            }
            num = sum; 
        }
        return num;
    }
};
