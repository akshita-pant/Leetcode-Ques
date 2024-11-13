class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m= matrix[0].size();
        int row=0;
        while(row<n)
        {
            int l=0, r=m-1;
            while(l<=r)
            {
                int mid= l+(r-l)/2;
                if(matrix[row][mid]==target)
                {return true;}
                else if(target > matrix[row][mid])
                {r=mid-1;}
                else{
                    l= mid+1;
                }
            }
            row++;
        }
        return false;
    }
};