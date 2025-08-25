
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;

        for (int i = 0; i < numRows; i++) {
            long long val = 1;
            vector<int> row;
            for (int col = 0; col <= i; col++) {
                row.push_back(val);
                val = val * (i - col) / (col + 1);  // nCr formula
            }
            result.push_back(row);
        }
        return result;
    }
};
