class Solution {
public:
    vector<int> generateRow(int row)
    {
        long long ans=1;
        vector<int> ansrow;
        ansrow.push_back(1);

        for(int col=1; col<row; col++)
        {
            ans=ans*(row-col);
            ans= ans/col;
            ansrow.push_back(ans);
        }
        return ansrow;
    }
    //........................................//

    vector<vector<int>> generate(int n) {
        vector<vector<int>> FinalAns;
        for(int row=1; row<=n; row++)
        {
            FinalAns.push_back(generateRow(row));
        }
        return FinalAns;
    }
};