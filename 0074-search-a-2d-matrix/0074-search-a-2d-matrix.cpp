class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty() || matrix[0].empty())return false;
        int row = matrix.size();
        int col = matrix[0].size();
        int low = 0;
        int high = row*col-1;
        while(low <= high)
        {
            int mid = low +(high -low)/2;
            int mid_val = matrix[mid/col][mid%col];

            if(mid_val == target)return true;
            else if(mid_val < target) low= mid+1;
            else high= mid -1;
        }
        return false;
    }
};