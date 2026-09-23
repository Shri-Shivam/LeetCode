class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top = 0, bottom = matrix.size()-1;
        int left = 0, right = matrix[0].size()-1;
        vector<int>ans;
        while(left<=right&& top<= bottom)
        {
            for(int i = left; i<=right;i++)
            {
               ans.push_back(matrix[top][i]);
            }
            top++;
            if(left<=right && top<= bottom)
            {
                for(int j = top; j<=bottom;j++)
                {
                    ans.push_back(matrix[j][right]);
                }
            }
            right--;
            if(left<=right&& top<= bottom)
            {
                for(int i=right;i>=left;i--)
                {
                   ans.push_back(matrix[bottom][i]);
                }
            }
            bottom--;
            if(left<=right && top<= bottom)
            {
                for(int j= bottom;j>=top;j--)
                {
                    ans.push_back(matrix[j][left]);
                }
            }
            left++;
        }
        return ans;
    }
};