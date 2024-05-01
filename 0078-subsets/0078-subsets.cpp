class Solution {
public:
    void helper(int idx, vector<int>nums, vector<int>output, vector<vector<int>>&ans)
    {
        if(idx>=nums.size())
        {
            ans.push_back(output);
            return;
        }
        helper(idx+1, nums, output, ans);
        int element= nums[idx];
        output.push_back(element);
        helper(idx+1, nums, output ,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>output;
        int idx=0;
        helper(idx, nums, output, ans);
        return ans;
    }
};