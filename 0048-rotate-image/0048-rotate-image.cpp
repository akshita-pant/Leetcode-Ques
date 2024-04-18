class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       int n= matrix.size();
       //transpose
       for(int i=0; i<n ; i++)
       {
        for(int j=i; j<n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
       } 
       //reverse rows
       for(int i=0;i<n; i++)
       {
        reverse(matrix[i].begin(), matrix[i].end());
       }
    }
};


/*
we iterate over the elements of the matrix and swap each element (i, j) with the element (j, i). However, if we were to start j from 0 in the inner loop, we would end up swapping each element twice, effectively restoring the original matrix.

So, why does the loop for j start from i? It's because we only need to transpose the upper triangular part of the matrix (above the main diagonal). Starting j from i ensures that we only swap the elements above the main diagonal, avoiding redundant swaps.
*/
