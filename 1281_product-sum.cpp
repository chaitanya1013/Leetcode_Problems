class Solution {
public:
    int subtractProductAndSum(int n) {
        int ld = 0;
        int product = 1;
        int sum = 0;
        while(n>0){
            ld = n % 10;
            product *= ld;
            sum += ld;
            n = n / 10;
        }
        return product - sum;
    }
};
