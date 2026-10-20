class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int>ans;
        for(int i=0;i<matrix.size();i++)
        {
                int an=0;
            for(int j=0;j< matrix[i].size();j++)
            {
                if(matrix[i][j]==1)
                {
                    an++;
                }
            }
            ans.push_back(an);
        }
        return ans;
    }
};