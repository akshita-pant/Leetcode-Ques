class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int a = m - 1; // a points to last element of array 1
        int b = n - 1; // b points to first element of array 2
        int mergeIdx = m + n - 1;
        while (a >= 0 && b >= 0 ) {
            if (nums1[a] > nums2[b]) {
                nums1[mergeIdx]= nums1[a];
                mergeIdx--; a--;
            }
            else
            {
                nums1[mergeIdx]= nums2[b];
                mergeIdx--; b--;
            }
        }
        //if any elements are left in nums2...we'll copy those too!!!
        while(b>=0)
        {
            nums1[mergeIdx]=nums2[b];
            mergeIdx--;b--;
        }
    }
};