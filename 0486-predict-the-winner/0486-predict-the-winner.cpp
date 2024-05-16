class Solution {
public:
    int score(vector<int>& nums, int s, int e){
        if(s>e) return 0;
        int chooseStart = nums[s] - score(nums, s+1, e);
        int chooseEnd = nums[e] - score(nums, s, e-1);
        return max(chooseStart,chooseEnd);
    }

    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        return score(nums, 0, n-1) >= 0;
    }
};