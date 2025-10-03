class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int lsum = 0, rsum = 0;
        
        for (int i = 0; i < k; i++) {
            lsum += cardPoints[i];
        }
        
        int max_sum = lsum;
        int rindex = n - 1;
        
        for (int i = k - 1; i >= 0; i--) {
            lsum -= cardPoints[i];
            rsum += cardPoints[rindex];
            rindex--;
            max_sum = max(max_sum, lsum + rsum);
        }
        
        return max_sum;
    }
};
