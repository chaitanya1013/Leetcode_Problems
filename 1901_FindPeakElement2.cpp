class Solution {
public:
    int findMaxRow(vector<vector<int>>& mat, int midCol, int n) {
        int maxVal = -1;
        int maxRow = -1;
        for (int i = 0; i < n; i++) {
            if (mat[i][midCol] > maxVal) {
                maxVal = mat[i][midCol];
                maxRow = i;
            }
        }
        return maxRow;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int low = 0, high = m - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int row = findMaxRow(mat, mid, n);

            int left = mid - 1 >= 0 ? mat[row][mid - 1] : -1;
            int right = mid + 1 < m ? mat[row][mid + 1] : -1;

            if (mat[row][mid] > left && mat[row][mid] > right) {
                return {row, mid};
            } else if (mat[row][mid] < left) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return {-1, -1};
    }
};
