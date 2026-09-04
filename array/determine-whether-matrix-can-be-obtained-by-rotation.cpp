class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        
     for(int i=0;i<4;i++)
     {
        for(int j =0;j<mat.size();j++)
        {
            for(int k=j;k<mat.size();k++)
            {
              swap(mat[j][k],mat[k][j]);
            }
        reverse(mat[j].begin(),mat[j].end());
        }
     if(mat==target)
     {
        return true;
     }
     }  
     return false;
    }
};