class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //part 1:---
        int n = matrix.size(); // Get the number of rows
        int m = matrix[0].size(); // Get the number of columns
        bool col0=false;
        for(int i=0; i<n; i++) //---ques me mxn diya hai maine yaha nxm kr diya
        {
            for(int j=0; j<m; j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0;

                    if(j!=0)
                    {matrix[0][j]=0;}
                    else
                    {col0=true;}
                }
            }
        }
        //part 2:---
        for(int i=1; i<n; i++)
        {
            for(int j=1; j<m; j++)
            {
                if(matrix[i][j]!=0) //kuki already 0 h to kya hi h..update to 1 walo ko check karenge!
                {
                    if(matrix[i][0]==0 || matrix[0][j]==0)
                    {matrix[i][j]=0;}
                }
            }
        }

        //part 3 :---
        if(matrix[0][0]==0)
        for(int j=0; j<m; j++)
        {matrix[0][j]=0;}

        if(col0)
        for(int i=0; i<n; i++)
        {matrix[i][0]=0;}

    }
};