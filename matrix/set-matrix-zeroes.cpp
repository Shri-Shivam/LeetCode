class Solution{
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int colm = matrix[0].size();
        bool firstrow=false;
        bool firstcol=false;
        for (int i = 0; i < row; i++) {
           if(matrix[i][0]==0)
           {
            firstcol=true;
           }
        }
        for (int j = 0; j < colm; j++) {
           if(matrix[0][j]==0)
           {
            firstrow=true;
           }
        }
        
        for (int i = 1; i < row; i++) {
            for (int j = 1; j < colm; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(int i=1;i<row;i++)
        {
            if(matrix[i][0]==0)
            {
                for(int j=1;j<colm;j++)
                {
                    matrix[i][j]=0;
                }
            }

        }
        for(int j=1;j<colm;j++)
        {
            if(matrix[0][j]==0)
            {
                for(int i=1;i<row;i++)
                {
                    matrix[i][j]=0;
                }
            }
        }
        if(firstrow)
        {
            for(int j=0;j<colm;j++)
            {
                matrix[0][j]=0;
            }
        }
        if(firstcol)
        {
            for(int i=0;i<row;i++)
            {
                matrix[i][0]=0;
            }
        }
    }
};