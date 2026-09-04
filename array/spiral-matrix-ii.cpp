class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n));
        int top = 0, bottom = n - 1;
        int left = 0, right = n - 1;
        int i = 1;
        while (i <= n * n) {
            for (int j = left; j <= right; j++) {
                matrix[top][j] = i++;
            }
            top++;
            if (i <=n * n) {
                for (int k = top; k <= bottom; k++) {
                    matrix[k][right] = i++;
                }
            right--;
            }
            if (i <= n * n) {
                for (int j = right; j >= left; j--) {
                    matrix[bottom][j] = i++;
                }
                bottom--;
            }
            if(i<=n*n)
            {
                for(int k=bottom;k>=top;k--)
                {
                    matrix[k][left]=i++;
                }
                left++;
            }
        }
        return matrix;
    }
};